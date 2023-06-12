#ifndef MOBILITY_H
#define MOBILITY_H

#include "Heuristic.h"

class Mobility : public Heuristic
{
public:
    Mobility(int player);

    double evaluate(const std::vector<std::vector<int>> &board);
    bool is_legal_direction(int curr_color, int opp_color, const std::vector<std::vector<int>> &grid, int i, int j, int di, int dj);
    bool is_legal_move(int curr_color, int opp_color, const std::vector<std::vector<int>> &grid, int i, int j);
    int valid_moves_number(int curr_color, int opp_color, const std::vector<std::vector<int>> &grid);
    double mobility_heuristics(int max_color, int min_color, const std::vector<std::vector<int>> &grid);
    bool is_valid_move(int i, int j, int n);
};

#endif
