#include "HeuristicController.h"

HeuristicController::HeuristicController(int player) {
    this->player = player;
    coinParity = new CoinParity(player);
    stability = new Stability(player);
    cornerCapture = new CornerCapture(player);
    mobility = new Mobility(player);
}

double HeuristicController::CornersHeuristic(const std::vector<std::vector<int>>& board) {
    return cornerCapture->evaluate(board);
}

double HeuristicController::StabilityHeuristic(const std::vector<std::vector<int>>& board) {
    return stability->evaluate(board);
}

double HeuristicController::CoinParityHeuristic(const std::vector<std::vector<int>>& board) {
    return coinParity->evaluate(board);
}

double HeuristicController::MobilityHeuristic(const std::vector<std::vector<int>>& board) {
    return mobility->evaluate(board);
}

double HeuristicController::CombinedStaticHeuristic(const std::vector<std::vector<int>>& board,
 double cornerWeight, double stabilityWeight, double coinParityWeight,
  double mobilityWeight) {
    double cornerHeuristic = cornerWeight * CornersHeuristic(board);
    double stabilityHeuristic = stabilityWeight * StabilityHeuristic(board);
    double coinParityHeuristic = coinParityWeight * CoinParityHeuristic(board);
    double mobilityHeuristic = mobilityWeight * MobilityHeuristic(board);

    return (cornerHeuristic + stabilityHeuristic + coinParityHeuristic + mobilityHeuristic)/
     (cornerWeight + stabilityWeight + coinParityWeight + mobilityWeight);
}
