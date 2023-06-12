#include "Stability.h"

Stability::Stability(int player) : Heuristic(player)
{
}

double Stability::evaluate(const std::vector<std::vector<int>> &board)
{
    int currentPlayer = getPlayer();
    int opponent = currentPlayer * -1;
    int maxCount = 0;
    int minCount = 0;

    std::vector<std::vector<int>> grid = {{4, -3, 2, 2, 2, 2, -3, 4},
                                          {-3, -4, -1, -1, -1, -1, -4, -3},
                                          {2, -1, 1, 0, 0, 1, -1, 2},
                                          {2, -1, 0, 1, 1, 0, -1, 2},
                                          {2, -1, 0, 1, 1, 0, -1, 2},
                                          {2, -1, 1, 0, 0, 1, -1, 2},
                                          {-3, -4, -1, -1, -1, -1, -4, -3},
                                          {4, -3, 2, 2, 2, 2, -3, 4}};

    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board.size(); j++)
        {
            if (board[i][j] == currentPlayer)
            {
                maxCount += grid[i][j];
            }
            else if (board[i][j] == opponent)
            {
                minCount += grid[i][j];
            }
        }
    }

    double heuristic_value = 0;

    if (maxCount + minCount != 0)
    {
        heuristic_value = (maxCount - minCount) * 100 / (maxCount + minCount);
    }

    return heuristic_value;
}