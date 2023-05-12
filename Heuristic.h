#include <vector>

class Heuristic {
    public:
    virtual int evaluate(const std::vector<std::vector<int>>& board) const = 0;
};