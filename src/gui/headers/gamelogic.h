#ifndef GAMELOGIC_H
#define GAMELOGIC_H

#include <vector>
#include <utility>
#include <fstream>

class GameLogic
{
private:
    int board[8][8];
    // directions order in the array
    // 0 1 2
    // 3   4
    // 5 6 7
    int directions[8][2] = {
        {-1, -1}, // top left
        {-1, 0},  // top
        {-1, 1},  // top right
        {0, -1},  // left
        {0, 1},   // right
        {1, -1},  // bottom left
        {1, 0},   // bottom
        {1, 1}    // bottom right
    };
    bool isOpponent(int playerInTurn, int x, int y);
    bool isCapturable(int playerInTurn, int x, int y, int direction);
    bool isValid(int x, int y);
    void captureInDirection(int playerInTurn, int x, int y, int direction);
    std::ofstream log;

public:
    static const int EMPTY = -1;
    static const int WHITE = 0;
    static const int BLACK = 1;
    GameLogic();
    void update(int playerInTurn, int xPosition, int yPosition);
    std::vector<std::pair<int, int>> getAvailableMoves(int playerInTurn);
    std::vector<std::pair<int, int>> getPlayerPositions(int playerInTurn);
    std::pair<int, int> getScore();
    bool isGameOver();
    void debug();
};

#endif // GAMELOGIC_H