#include "Heuristic.h"

class CoinParity : public Heuristic {
public:
    CoinParity(int player) : Heuristic(player) {
    }
    
    int evaluate(const std::vector<std::vector<int>>& board);

    private:
    const int BOARD_SIZE = 8;
};