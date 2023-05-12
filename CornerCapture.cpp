#include "CornerCapture.h"
#include <math.h>

// TODO : Take into Consideration the weights if implemented
int CornerCapture::evaluate(const std::vector<std::vector<int>>& board, int player) {
    int playerCount = 0;
    int opponent = player * -1;
    int opponentCount = 0;
    int heuristic_value = 0;
    for(std::vector<int> corner : CORNERS) {
        if(board[corner[0]][corner[1]] == player) playerCount++;
        if(board[corner[0]][corner[1]] == opponent) opponentCount++;
    }
    int maxPlayer = std::max(playerCount, opponentCount);
    int minPlayer = std::min(playerCount, opponentCount);
    if(playerCount + opponentCount != 0) {
        heuristic_value = (maxPlayer - minPlayer) / (maxPlayer + minPlayer);
    }
    return heuristic_value * 100;
}