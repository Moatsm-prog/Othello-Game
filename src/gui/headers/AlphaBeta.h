#ifndef ALPHABETA_H
#define ALPHABETA_H

#include <chrono>
#include <limits>
#include "GameLogic.h"

class AlphaBeta {
private:
    GameLogic gameLogic;
    std::chrono::steady_clock::time_point startTime;
    int maxSearchTime;  // Maximum time in milliseconds for the search

public:
    AlphaBeta(GameLogic gameLogic_);

    std::pair<int, int> alphaBetaSearch(int playerInTurn);
    std::pair<int,int> iterativeDeepeningSearch(int playerInTurn, int depth);
    int evaluateBoard(int playerInTurn);
    int alphaBetaSearchRecursive(int playerInTurn, int depth, int alpha, int beta);

};

#endif // ALPHABETA_H
