#include <vector>

class Heuristic {
public:
    explicit Heuristic(int player) : player(player) {}

    virtual int evaluate(const std::vector<std::vector<int>>& board) const = 0;

protected:
    int getPlayer() const {
        return player;
    }

private:
    int player;
};