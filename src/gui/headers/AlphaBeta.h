#ifndef ALPHABETA_H
#define ALPHABETA_H

#include <chrono>
#include <limits>
#include "gamelogic.h"
#include "./HeuristicController.h"
#include <algorithm> 

class AlphaBeta {
private:
    GameLogic gameLogic;
    std::chrono::steady_clock::time_point startTime;
    int maxSearchTime;  // Maximum time in milliseconds for the search

public:
    AlphaBeta(GameLogic gameLogic_);

    std::pair<int, int> alphaBetaSearch(int playerInTurn , int difficulty);
    std::pair<int,int> iterativeDeepeningSearch(int playerInTurn, int depth);
    int evaluateBoard(int playerInTurn);
    int alphaBetaSearchRecursive(int playerInTurn, int depth, int alpha, int beta);
    bool compareHeuristics(const std::pair<std::pair<int, int>, int>& state1, const std::pair<std::pair<int, int>, int>& state2);
    std::vector<std::pair<int, int>> sortBoardStatesByHeuristic(std::vector<std::pair<int, int>>& moves, GameLogic gamelogic_ , int playerInTurn);


};

#endif // ALPHABETA_H
