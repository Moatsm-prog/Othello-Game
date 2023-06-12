#include "Mobility.h"

Mobility::Mobility(int player) : Heuristic(player) {}

bool Mobility::is_valid_move(int i, int j, int n)
{
  return i >= 0 && j >= 0 && i < n && j < n;
}

bool Mobility::is_legal_direction(int curr_color, int opp_color, const std::vector<std::vector<int>> &grid, int i, int j, int di, int dj)
{
  int newi = i + di;
  int newj = j + dj;

  if (!is_valid_move(newi, newj, grid.size()))
    return false;
  if (grid[newi][newj] != opp_color)
    return false;

  while (is_valid_move(newi + di, newj + dj))
  {
    newi += di;
    newj += dj;
    if (grid[newi][newj] == curr_color)
      return true;
  }

  return false;
}

bool Mobility::is_legal_move(int curr_color, int opp_color, const std::vector<std::vector<int>> &grid, int i, int j)
{
  if (grid[i][j] == curr_color || grid[i][j] == opp_color)
    return false;
  int di[] = {0, 0, 1, 1, 1, -1, -1, -1};
  int dj[] = {1, -1, 1, 0, -1, 1, 0, -1};

  for (int k = 0; k < 8; k++)
  {
    if (is_legal_direction(curr_color, opp_color, grid, i, j, di[k], dj[k]))
      return true;
  }
  return false;
}

int Mobility::valid_moves_number(int curr_color, int opp_color, const std::vector<std::vector<int>> &grid)
{
  int count = 0;
  for (int i = 0; i < grid.size(); i++)
    for (int j = 0; j < grid.size(); j++)
      if (is_legal_move(curr_color, opp_color, grid, i, j))
        count++;

  return count;
}

double Mobility::mobility_heuristics(int max_color, int min_color, const std::vector<std::vector<int>> &grid)
{
  int max_mobility = valid_moves_number(max_color, min_color, grid);
  int min_mobility = valid_moves_number(min_color, max_color, grid);

  if (max_mobility + min_mobility == 0)
    return 0;

  double heuristics = 100.0 * (max_mobility - min_mobility) / (max_mobility + min_mobility);
  return heuristics;
}

double Mobility::evaluate(const std::vector<std::vector<int>> &board)
{
  int currPlayer = getPlayer();
  int oppPlayer = currPlayer * -1;
  return mobility_heuristics(currPlayer, oppPlayer, board);
}
