#include "solution.h"
#include <iostream>

bool Solution::Maze(std::vector<std::vector<int>> maze, int x, int y)
{
    int N = maze[0].size();
    if (x == N - 1 && y == N - 1) {
        return true;
    }
    if (Passable(maze, x, y)) {
        if (Maze(maze, x + 1, y))
            return true;
        if (Maze(maze, x, y + 1))
            return true;
        return false;
    }
    return false;
}

bool Solution::Passable(std::vector<std::vector<int>> maze, int x, int y)
{
    int N = maze[0].size();
    if (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1)
        return true;
    return false;
}
