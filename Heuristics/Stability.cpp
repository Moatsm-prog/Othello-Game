#include "Stability.h"

Stability::Stability(int player) : Heuristic(player) {
}

double Stability::evaluate(const std::vector<std::vector<int>>& board) {
    int currentPlayer = getPlayer();
    int opponent = currentPlayer * -1;
    int maxCount = 0;
    int minCount = 0;

    // logic here
    // i need to use backend apis to get the stability of the board

    double heuristic_value = 0;

    if(maxCount + minCount != 0) {
        heuristic_value = (maxCount - minCount) * 100 / (maxCount + minCount);
    }

    return heuristic_value;

}