#include "../gui/headers/gamelogic.h"
#include <iostream>
int main(int argc, char const *argv[])
{
    GameLogic game;
    game.debug();
    int WHITE = game.WHITE;
    int BLACK = game.BLACK;
    std::vector<std::pair<int, int>> availableMoves;
    while (!game.isGameOver())
    {
        int x, y;
        // get available moves
        availableMoves = game.getAvailableMoves(BLACK);
        for (int i = 0; i < int(availableMoves.size()); i++)
        {
            std::cout << i << ". " << availableMoves[i].first << ", " << availableMoves[i].second << std::endl;
        }
        if (availableMoves.empty())
        {
            std::cout << "No available moves for black" << std::endl;
        }
        else
        {
            while (std::cin >> x >> y)
            {
                // check if the move is valid
                bool valid = false;
                for (int i = 0; i < int(availableMoves.size()); i++)
                {
                    if (availableMoves[i].first == x && availableMoves[i].second == y)
                    {
                        valid = true;
                        break;
                    }
                }
                if (!valid)
                    std::cout << "Invalid move" << std::endl;
                else
                    break;
            }
            game.update(BLACK, x, y);
            game.debug();
        }
        // get available moves
        std::vector<std::pair<int, int>> availableMoves = game.getAvailableMoves(WHITE);
        for (int i = 0; i < int(availableMoves.size()); i++)
        {
            std::cout << i << ". " << availableMoves[i].first << ", " << availableMoves[i].second << std::endl;
        }
        if (availableMoves.empty())
        {
            std::cout << "No available moves for white" << std::endl;
        }
        else
        {
            while (std::cin >> x >> y)
            {
                // check if the move is valid
                bool valid = false;
                for (int i = 0; i < int(availableMoves.size()); i++)
                {
                    if (availableMoves[i].first == x && availableMoves[i].second == y)
                    {
                        valid = true;
                        break;
                    }
                }
                if (!valid)
                    std::cout << "Invalid move" << std::endl;
                else
                    break;
            }
            game.update(WHITE, x, y);
            game.debug();
        }
    }
    std::pair<int, int> score = game.getScore();
    std::cout << "Game over" << std::endl;
    std::cout << "White: " << score.first << std::endl;
    std::cout << "Black: " << score.second << std::endl;
    system("pause");
    return 0;
}