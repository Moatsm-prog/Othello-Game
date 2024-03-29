#ifndef _COIN_PARITY_H_
#define _COIN_PARITY_H_

#include "Heuristic.h"

class CoinParity : public Heuristic {
public:
    CoinParity(int player) : Heuristic(player) {
    }
    
    double evaluate(const std::vector<std::vector<int>>& board);

    private:
    const int BOARD_SIZE = 8;
};

#endif