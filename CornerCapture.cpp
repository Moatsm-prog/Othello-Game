#include "CornerCapture.h"

// TODO : Take into Consideration the weights if implemented
int CornerCapture::evaluate(const std::vector<std::vector<int>>& board) {
    int currentPlayer = getPlayer();
    int opponent = currentPlayer * -1;
    int maxCount, minCount;
    minCount = maxCount = 0;
    
    for(std::vector<int> corner : CORNERS) {
        if(board[corner[0]][corner[1]] == currentPlayer) maxCount++;
        if(board[corner[0]][corner[1]] == opponent) minCount++;
    }

    int heuristic_value = 0;
    if(maxCount + minCount != 0) {
        heuristic_value = (maxCount - minCount) / (maxCount + minCount);
    }

    return heuristic_value * 100;
}