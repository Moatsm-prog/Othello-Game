#ifndef MOBILITY_H
#define MOBILITY_H

#include "Heuristic.h"

class Mobility : public Heuristic{
    public:

    Mobility(int player);

    double evaluate(const std::vector<std::vector<int>>& board);

};

#endif