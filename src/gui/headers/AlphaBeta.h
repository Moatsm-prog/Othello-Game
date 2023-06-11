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

    int alphaBetaSearch(int playerInTurn);
    std::pair<int,int> AlphaBeta::iterativeDeepeningSearch(int playerInTurn, int depth);
    std::pair<int,int> evaluateBoard(int playerInTurn);
};

#endif // ALPHABETA_H