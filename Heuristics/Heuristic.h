#ifndef _HEURISTIC_H_
#define _HEURISTIC_H_

#include <vector>
class Heuristic {
public:
    explicit Heuristic(int player) : player(player) {}

    virtual double evaluate(const std::vector<std::vector<int>>& board) = 0;

protected:
    int getPlayer() const {
        return player;
    }

private:
    int player;
};

#endif