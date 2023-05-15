#include "CoinParity.h"

int CoinParity::evaluate(const std::vector<std::vector<int>>& board) {
    int currentPlayer = getPlayer();
    int opponent = currentPlayer * -1;
    int maxCount = 0;
    int minCount = 0;
    for(const std::vector<int>& row : board ) {
        for(int cell : row) {
            if(cell == currentPlayer) {
                maxCount++;
            } else if (cell == opponent) {
                minCount++;
            }
        }
    }

    int heuristic_value = (maxCount - minCount) / (maxCount + minCount);

    return heuristic_value * 100;
}