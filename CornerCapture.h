s#ifndef _CORNER_CAPTURE_
#define _CORNER_CAPTURE_

#include "Heuristic.h"

class CornerCapture : public Heuristic {
public:
    CornerCapture(int player) : Heuristic(player) {
    }
    
    int evaluate(const std::vector<std::vector<int>>& board);

    private:
    const int BOARD_SIZE = 8;
    const std::vector<std::vector<int>> CORNERS = {{0, 0}, // top left corner
                                                   {0, BOARD_SIZE - 1}, // top right corner
                                                   {BOARD_SIZE - 1, 0}, // bottom left corner 
                                                   {BOARD_SIZE - 1, BOARD_SIZE - 1}}; // bottom right corner
};

#endif