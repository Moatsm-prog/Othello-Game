#include "../headers/AlphaBeta.h"

AlphaBeta::AlphaBeta(GameLogic gameLogic_) : gameLogic(gameLogic_)
{
    maxSearchTime = 1000; // Set the maximum search time to 5 seconds
}

std::pair<int, int> AlphaBeta::alphaBetaSearch(int playerInTurn, int difficulty)
{
    startTime = std::chrono::steady_clock::now();
    std::pair<int, int> bestMove = {-2, -2};
    int depth = 1;
    if(difficulty == 0) this->maxSearchTime = 100;
    else if(difficulty == 1) this->maxSearchTime = 300;
    else if(difficulty == 2) this->maxSearchTime = 800;

    while (true)
    {
        std::pair<int, int> currentBestMove = iterativeDeepeningSearch(playerInTurn, depth, difficulty);
        bestMove = currentBestMove;
        // Check if the search time constraint is violated
        std::chrono::steady_clock::time_point currentTime = std::chrono::steady_clock::now();
        std::chrono::milliseconds elapsedTime = std::chrono::duration_cast<std::chrono::milliseconds>(currentTime - startTime);
        if (elapsedTime.count() >= maxSearchTime)
        {
            break;
        }

        depth++;
    }

    return bestMove;
}

std::pair<int, int> AlphaBeta::iterativeDeepeningSearch(int playerInTurn, int depth, int difficulty)
{
    std::pair<int, int> bestMove = {-2, -2};
    int alpha = std::numeric_limits<int>::min();
    int beta = std::numeric_limits<int>::max();

    std::vector<std::pair<int, int>> availableMoves = gameLogic.getAvailableMoves(playerInTurn);
    availableMoves = sortBoardStatesByHeuristic(availableMoves, gameLogic, playerInTurn ,difficulty);

    for (const auto &move : availableMoves)
    {
        int x = move.first;
        int y = move.second;

        // Get a copy of the current board
        GameLogic gameLogicCopy = GameLogic(gameLogic);

        // Make the move on the original board
        gameLogic.update(playerInTurn, x, y);

        int eval = alphaBetaSearchRecursive(playerInTurn, depth - 1, alpha, beta, difficulty);
        if (eval > alpha && GameLogic::BLACK)
        {
            alpha = eval;
            bestMove = std::make_pair(x, y);
        }
        else if (eval < beta && GameLogic::WHITE)
        {
            beta = eval;
            bestMove = std::make_pair(x, y);
        }
        // restore the original board
        gameLogic = gameLogicCopy;
    }

    return bestMove;
}

int AlphaBeta::alphaBetaSearchRecursive(int playerInTurn, int depth, int alpha, int beta, int difficulty)
{
    if (depth == 0 || gameLogic.isGameOver())
    {
        return evaluateBoard(playerInTurn);
    }

    std::vector<std::pair<int, int>> availableMoves = gameLogic.getAvailableMoves(playerInTurn);
    availableMoves = sortBoardStatesByHeuristic(availableMoves, gameLogic, playerInTurn, difficulty);

    // Maximizer
    if (playerInTurn == GameLogic::BLACK)
    {
        int maxEval = std::numeric_limits<int>::min();

        for (const auto &move : availableMoves)
        {
            int x = move.first;
            int y = move.second;

            // Make the move
            gameLogic.update(playerInTurn, x, y);

            int eval = alphaBetaSearchRecursive(GameLogic::WHITE, depth - 1, alpha, beta, difficulty);
            maxEval = std::max(maxEval, eval);
            alpha = std::max(alpha, eval);

            // Undo the move
            gameLogic.update(GameLogic::EMPTY, x, y);

            if (beta <= alpha)
            {
                break; // Beta cutoff
            }
        }

        return maxEval;
    }

    // Minimizer
    else
    {
        int minEval = std::numeric_limits<int>::max();

        for (const auto &move : availableMoves)
        {
            int x = move.first;
            int y = move.second;

            // Make the move
            gameLogic.update(playerInTurn, x, y);

            int eval = alphaBetaSearchRecursive(GameLogic::BLACK, depth - 1, alpha, beta, difficulty);
            minEval = std::min(minEval, eval);
            beta = std::min(beta, eval);

            // Undo the move
            gameLogic.update(GameLogic::EMPTY, x, y);

            if (beta <= alpha)
            {
                break; // Alpha cutoff
            }
        }

        return minEval;
    }
}

int AlphaBeta::evaluateBoard(int playerInTurn)
{
    int score = 0;

    std::pair<int, int> playerScores = gameLogic.getScore();
    int currentPlayerScore = playerScores.first;
    int opponentScore = playerScores.second;

    if (playerInTurn == GameLogic::WHITE)
    {
        score = currentPlayerScore - opponentScore;
    }
    else
    {
        score = opponentScore - currentPlayerScore;
    }

    // To add Heutritics to score (Make higher heuritics more important)

    return score;
}

/*bool AlphaBeta::compareHeuristics(const std::pair<std::pair<int, int>, int> &state1, const std::pair<std::pair<int, int>, int> &state2)
{

    return state1.second > state2.second;
}*/

std::vector<std::pair<int, int>> AlphaBeta::sortBoardStatesByHeuristic(std::vector<std::pair<int, int>> &moves, GameLogic gamelogic_, int playerInTurn, int difficulty)
{
    // Create a copy of the input board states

    GameLogic gameLogicCopy = GameLogic(gamelogic_);
    std::vector<std::pair<std::pair<int, int>, int>> sortedBoardStates;
    HeuristicController heuristicController = HeuristicController(playerInTurn);
    if(difficulty == 0){
        for (int i = 0; i < moves.size(); i++)
        {
            gameLogicCopy.update(playerInTurn, moves[i].first, moves[i].second);
            sortedBoardStates.push_back(std::make_pair(moves[i], heuristicController.CoinParityHeuristic(gameLogicCopy.getBoard())));
            gameLogicCopy = GameLogic(gamelogic_);
        }
    }else if(difficulty == 1){
        for (int i = 0; i < moves.size(); i++)
        {
            gameLogicCopy.update(playerInTurn, moves[i].first, moves[i].second);
            sortedBoardStates.push_back(std::make_pair(moves[i], heuristicController.CornersHeuristic(gameLogicCopy.getBoard())));
            gameLogicCopy = GameLogic(gamelogic_);
        }
    }else if(difficulty == 2){
        for (int i = 0; i < moves.size(); i++)
        {
            gameLogicCopy.update(playerInTurn, moves[i].first, moves[i].second);
            sortedBoardStates.push_back(std::make_pair(moves[i], heuristicController.CombinedStaticHeuristic(gameLogicCopy.getBoard())));
            gameLogicCopy = GameLogic(gamelogic_);
        }
    }
    std::sort(sortedBoardStates.begin(), sortedBoardStates.end(), [](const auto& state1, const auto& state2) {
        return state1.second > state2.second;});

    std::vector<std::pair<int, int>> sortedMoves;
    for (int i = 0; i < sortedBoardStates.size(); i++)
    {
        sortedMoves.push_back(sortedBoardStates[i].first);
    }

    return sortedMoves;
}
