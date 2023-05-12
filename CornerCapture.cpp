#include "CornerCapture.h"
#include <math.h>

// TODO : Take into Consideration the weights if implemented
int CornerCapture::evaluate(const std::vector<std::vector<int>>& board) {
    int whiteCount = 0;
    int blackCount = 0;
    int heuristic_value = 0;
    for(std::vector<int> corner : CORNERS) {
        if(board[corner[0]][corner[1]] == WHITE) whiteCount++;
        if(board[corner[0]][corner[1]] == BLACK) blackCount++;
    }
    int maxPlayerCount = std::max(whiteCount, blackCount);
    int minPlayerCount = std::min(whiteCount, blackCount);
    if(whiteCount + blackCount != 0) {
        heuristic_value = (maxPlayerCount - minPlayerCount) / (maxPlayerCount + minPlayerCount);
    }
    return heuristic_value * 100;
}