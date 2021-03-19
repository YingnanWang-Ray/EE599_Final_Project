#include "src/lib/solution.h"
#include<bits/stdc++.h>

int main()
{
    Solution solution;
    std::vector<std::vector<int>> maze;
    maze = {
        { 1, 1, 0, 0, 0 },
        { 1, 0, 1, 1, 1 },
        { 1, 1, 0, 0, 1 },
        { 1, 1, 0, 0, 1 },
        { 1, 1, 1, 1, 1 } };
    std::cout<<std::boolalpha<<solution.Maze(maze,0,0)<<std::endl;
    return EXIT_SUCCESS;
}
