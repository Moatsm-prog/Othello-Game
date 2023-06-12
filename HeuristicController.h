#include <vector>
#include "CoinParity.h"
#include "Stability.h"
#include "CornerCapture.h"
// #include "Mobility.h"



class HeuristicController {

    public:
    HeuristicController(int player);

    double CornersHeuristic(const std::vector<std::vector<int>>& board);

    double StabilityHeuristic(const std::vector<std::vector<int>>& board);

    double CoinParityHeuristic(const std::vector<std::vector<int>>& board);

    double MobilityHeuristic(const std::vector<std::vector<int>>& board);

    double CombinedStaticHeuristic(const std::vector<std::vector<int>>& board,
     double cornerWeight=30, double stabilityWeight= 25, double coinParityWeight = 25,
      double mobilityWeight = 5);

    // these default weights are the ones used in the paper, but you can change them to whatever you want


    private:
    
    int player;

    CoinParity *coinParity = nullptr;
    Stability *stability = nullptr;
    CornerCapture *cornerCapture = nullptr;
    Mobility *mobility = nullptr;

};