#include "../headers/gamelogic.h"

GameLogic::GameLogic()
{
    initBoard();
    initLogger();
}

GameLogic::GameLogic(Player *blackPlayer, Player *whitePlayer)
{
    this->blackPlayer = blackPlayer;
    this->whitePlayer = whitePlayer;
    initBoard();
    initLogger();
}

// copy constructor
GameLogic::GameLogic(const GameLogic &gameLogic)
{
    // copy board
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            board[i][j] = gameLogic.board[i][j];
    // copy players
    blackPlayer = gameLogic.blackPlayer;
    whitePlayer = gameLogic.whitePlayer;
}

// copy assignment operator
GameLogic &GameLogic::operator=(const GameLogic &gameLogic)
{
    // copy board
    if (this != &gameLogic)
    {
        // copy board
        for (int i = 0; i < 8; i++)
            for (int j = 0; j < 8; j++)
                board[i][j] = gameLogic.board[i][j];
        // copy players
        blackPlayer = gameLogic.blackPlayer;
        whitePlayer = gameLogic.whitePlayer;
    }
    return *this;
}

void GameLogic::initBoard()
{
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            board[i][j] = EMPTY;
    board[3][3] = WHITE;
    board[3][4] = BLACK;
    board[4][3] = BLACK;
    board[4][4] = WHITE;
}

void GameLogic::initLogger()
{
    // Init log file, it will be used for debugging purposes.
    // It's opened in append mode to not be overwritten every time the program is run
    // if it is open, return
    if (log.is_open())
        return;
    log.open("log.txt", std::ios_base::app);
    log << "**********\nNew game:" << std::endl;
}

void GameLogic::update(int playerInTurn, int xPosition, int yPosition)
{
    log << "Player " << playerInTurn << " played at " << xPosition << "," << yPosition << std::endl;
    board[xPosition][yPosition] = playerInTurn;
    // check for all directions
    for (int i = 0; i < 8; i++)
    {
        int x = xPosition + directions[i][0];
        int y = yPosition + directions[i][1];
        if (isOpponent(playerInTurn, x, y))
        {
            log << "\tTrying to capture in direction " << i << std::endl;
            captureInDirection(playerInTurn, x, y, i);
        }
    }
}

bool GameLogic::isOpponent(int playerInTurn, int x, int y)
{
    return isValid(x, y)                    // check if the cell is not out of bounds
           && board[x][y] == !playerInTurn; // check if the cell is the opposite color
}

bool GameLogic::isValid(int x, int y)
{
    return x >= 0 && x < 8 && y >= 0 && y < 8;
}

void GameLogic::captureInDirection(int playerInTurn, int x, int y, int direction)
{
    // testing if direction has only 1 opponent cell with no current player cells after it
    // if so, then it is not capturable
    int testX = x;
    int testY = y;
    int steps = 0;
    while (board[testX][testY] != playerInTurn)
    {
        steps++;
        testX += directions[direction][0];
        testY += directions[direction][1];
        if (!isValid(testX, testY) || board[testX][testY] == EMPTY)
            return;
        if (board[testX][testY] == playerInTurn)
            break;
    }
    // capture the cells
    while (steps--)
    {
        log << "\t\tCapturing " << x << "," << y << std::endl;
        board[x][y] = playerInTurn;
        x += directions[direction][0];
        y += directions[direction][1];
    }
}

std::vector<std::pair<int, int>> GameLogic::getAvailableMoves(int playerInTurn)
{
    std::vector<std::pair<int, int>> availableMoves;
    // check for all cells
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            // if the cell is empty, check if it's a valid move
            if (board[i][j] == EMPTY)
            {
                // check for all directions
                for (int direction = 0; direction < 8; direction++)
                {
                    if (isCapturable(playerInTurn, i, j, direction))
                    {
                        availableMoves.push_back(std::pair<int, int>(i, j));
                        break;
                    }
                }
            }
        }
    }
    log << "Available moves: " << availableMoves.size() << std::endl;
    for (int i = 0; i < int(availableMoves.size()); i++)
    {
        log << "\t" << availableMoves[i].first << "," << availableMoves[i].second << std::endl;
    }
    return availableMoves;
}

bool GameLogic::isCapturable(int playerInTurn, int x, int y, int direction)
{
    int count = 0;
    while (true)
    {
        x += directions[direction][0];
        y += directions[direction][1];
        if (!isValid(x, y) || board[x][y] == EMPTY)
            return false;
        if (board[x][y] == playerInTurn)
            return count;
        count++;
    }
}

std::vector<std::pair<int, int>> GameLogic::getPlayerPositions(int playerInTurn)
{
    std::vector<std::pair<int, int>> playerPositions;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (board[i][j] == playerInTurn)
                playerPositions.push_back(std::pair<int, int>(i, j));
        }
    }
    return playerPositions;
}

std::pair<int, int> GameLogic::getScore()
{
    std::pair<int, int> score{0, 0};
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            score.first += board[i][j] == WHITE;
            score.second += board[i][j] == BLACK;
        }
    }
    return score;
}

bool GameLogic::isGameOver()
{
    return getAvailableMoves(WHITE).empty() && getAvailableMoves(BLACK).empty();
}

void GameLogic::reset()
{
    initBoard();
    log << "Resetting the board" << std::endl;
}

// Any functions below this comment are used for batch testing
// They are not used in the actual game, but they are useful for debugging
// They could be removed in the final version when GUI is implemented
#include <iostream>
#include <string>
void GameLogic::debug()
{
    // clear the screen
    std::cout << "\033[2J\033[1;1H";
    // Define the box drawing characters
    const char topLeft = 218;
    const char topRight = 191;
    const char bottomLeft = 192;
    const char bottomRight = 217;
    const char horizontal = 196;
    const char vertical = 179;
    const char intersectionLeft = 195;
    const char intersectionRight = 180;
    const char intersectionTop = 194;
    const char intersectionBottom = 193;
    const char intersectionCenter = 197;

    // Print the top border
    std::cout << topLeft;
    for (int i = 0; i < 7; i++)
    {
        std::cout << horizontal << horizontal << horizontal << horizontal << horizontal << intersectionTop;
    }
    std::cout << horizontal << horizontal << horizontal << horizontal << horizontal << topRight << std::endl;

    // Print the board
    for (int i = 0; i < 8; i++)
    {
        std::cout << vertical << " ";
        for (int j = 0; j < 8; j++)
        {
            std::string piece = std::to_string(i) + "," + std::to_string(j);
            if (board[i][j] == WHITE)
                piece = " W ";
            else if (board[i][j] == BLACK)
                piece = " B ";
            std::cout << piece << " " << vertical << " ";
        }
        std::cout << std::endl;
        if (i < 7)
        {
            std::cout << intersectionLeft;
            for (int j = 0; j < 7; j++)
            {
                std::cout << horizontal << horizontal << horizontal << horizontal << horizontal << intersectionCenter;
            }
            std::cout << horizontal << horizontal << horizontal << horizontal << horizontal << intersectionRight << std::endl;
        }
    }

    // Print the bottom border
    std::cout << bottomLeft;
    for (int i = 0; i < 7; i++)
    {
        std::cout << horizontal << horizontal << horizontal << horizontal << horizontal << intersectionBottom;
    }
    std::cout << horizontal << horizontal << horizontal << horizontal << horizontal << bottomRight << std::endl;
}

std::vector<std::vector<int>> GameLogic::getBoard()
{
    std::vector<std::vector<int>> vec(8, std::vector<int>(8));
    for (int m = 0; m < 8; m++){        //storing and printing data
        for (int n = 0; n < 8; n++){
            vec[m][n] = this->board[m][n];
        }
    }
    return vec;
}
