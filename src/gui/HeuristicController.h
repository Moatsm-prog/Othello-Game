#include <vector>
#include "./Heuristics/CoinParity.h"
#include "./Heuristics/Stability.h"
#include "./Heuristics/CornerCapture.h"
#include "./Heuristics/Mobility.h"



class HeuristicController {

    public:
    HeuristicController(int player);

    double CornersHeuristic(const std::vector<std::vector<int>>& board);

    double StabilityHeuristic(const std::vector<std::vector<int>>& board);

    double CoinParityHeuristic(const std::vector<std::vector<int>>& board);

    double MobilityHeuristic(const std::vector<std::vector<int>>& board);

    double CombinedStaticHeuristic(const std::vector<std::vector<int>>& board,
     double cornerWeight=40, double stabilityWeight= 10, double coinParityWeight = 30,
      double mobilityWeight = 5);

    // these default weights are the ones used in the paper, but you can change them to whatever you want


    private:
    
    int player;

    CoinParity *coinParity = nullptr;
    Stability *stability = nullptr;
    CornerCapture *cornerCapture = nullptr;
    Mobility *mobility = nullptr;

};
