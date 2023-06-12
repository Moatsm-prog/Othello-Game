#ifndef STABILITY_H
#define STABILITY_H

#include "Heuristic.h"

class Stability : public Heuristic{
    public:

    Stability(int player);

    double evaluate(const std::vector<std::vector<int>>& board);

};

#endif