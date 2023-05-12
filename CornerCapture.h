#include "Heuristic.h"

class CornerCapture : public Heuristic {
    int evaluate(const std::vector<std::vector<int>>& board, int player);

    private:
    const int BLACK = -1;
    const int WHITE = 1;
    const int BOARD_SIZE = 8;
    const std::vector<std::vector<int>> CORNERS = {{0, 0}, // top left corner
                                                   {0, BOARD_SIZE - 1}, // top right corner
                                                   {BOARD_SIZE - 1, 0}, // bottom left corner 
                                                   {BOARD_SIZE - 1, BOARD_SIZE - 1}}; // bottom right corner
    // TODO: Assign weights to the four corners
};