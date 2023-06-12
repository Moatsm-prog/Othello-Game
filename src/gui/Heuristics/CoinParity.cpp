#include "CoinParity.h"
#include <iostream>

double CoinParity::evaluate(const std::vector<std::vector<int>>& board) {
    int currentPlayer = getPlayer();
    int opponent = currentPlayer * -1;
    int maxCount = 0;
    int minCount = 0;
    for(std::vector<int> row : board) {
        for(int cell : row) {
            if(cell == currentPlayer) {
                maxCount++;
            } else if (cell == opponent) {
                minCount++;
            }
        }
    }
    std::cout << maxCount << " " << minCount << std::endl;

    double heuristic_value = (maxCount - minCount) * 100 / (maxCount + minCount);

    return heuristic_value;
}