#include "AlphaBeta.h"

AlphaBeta::AlphaBeta(GameLogic gameLogic_)
{
    // Initialize the game logic
    gameLogic = gameLogic_;
    maxSearchTime = 5000; // Set the maximum search time to 5 seconds
}

std::pair<int, int> AlphaBeta::alphaBetaSearch(int playerInTurn)
{
    startTime = std::chrono::steady_clock::now();
    std::pair<int, int> bestMove = {-2, -2};
    int depth = 1;

    while (true)
    {
        std::pair<int, int> currentBestMove = iterativeDeepeningSearch(playerInTurn, depth);

        // Check if the search time constraint is violated
        std::chrono::steady_clock::time_point currentTime = std::chrono::steady_clock::now();
        std::chrono::milliseconds elapsedTime = std::chrono::duration_cast<std::chrono::milliseconds>(currentTime - startTime);
        if (elapsedTime.count() >= maxSearchTime)
        {
            break;
        }

        bestMove = currentBestMove;
        depth++;
    }

    return bestMove;
}

std::pair<int, int> AlphaBeta::iterativeDeepeningSearch(int playerInTurn, int depth)
{
    std::pair<int, int> bestMove = {-2, -2};
    int alpha = std::numeric_limits<int>::min();
    int beta = std::numeric_limits<int>::max();

    std::vector<std::pair<int, int>> availableMoves = gameLogic.getAvailableMoves(playerInTurn);

    for (const auto &move : availableMoves)
    {
        int x = move.first;
        int y = move.second;

        // Make the move
        gameLogic.update(playerInTurn, x, y);

        int eval = alphaBetaSearchRecursive(playerInTurn, depth - 1, alpha, beta);
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

        // Undo the move
        gameLogic.update(GameLogic::EMPTY, x, y);
    }

    return bestMove;
}

int AlphaBeta::alphaBetaSearchRecursive(int playerInTurn, int depth, int alpha, int beta)
{
    if (depth == 0 || gameLogic.isGameOver())
    {
        return evaluateBoard(playerInTurn);
    }

    std::vector<std::pair<int, int>> availableMoves = gameLogic.getAvailableMoves(playerInTurn);

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

            int eval = alphaBetaSearchRecursive(GameLogic::WHITE, depth - 1, alpha, beta);
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

            int eval = alphaBetaSearchRecursive(GameLogic::BLACK, depth - 1, alpha, beta);
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