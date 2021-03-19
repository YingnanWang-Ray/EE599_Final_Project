#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>
using namespace std;

TEST(Function0, Return0) {
  Solution solution;
  std::vector<std::vector<int>> maze;
  maze = {
        { 1, 1, 0, 0, 0 },
        { 1, 0, 1, 1, 1 },
        { 1, 1, 0, 0, 1 },
        { 1, 1, 0, 0, 1 },
        { 1, 1, 1, 1, 1 } };
  EXPECT_EQ(true, solution.Maze(maze,0,0));  
}

TEST(Function1, Return1) {
  Solution solution;
  std::vector<std::vector<int>> maze;
  maze = {
            { 1, 1, 0, 0, 0 },
            { 1, 1, 1, 1, 1 },
            { 0, 1, 0, 0, 1 },
            { 1, 0, 0, 0, 0 },
            { 1, 1, 1, 1, 1 } };
  EXPECT_EQ(false, solution.Maze(maze,1,2));  
}

TEST(Function2, Return2) {
  Solution solution;
  std::vector<std::vector<int>> maze;
  maze = {
            { 1, 1, 0, 0, 0 },
            { 1, 1, 1, 0, 1 },
            { 0, 1, 0, 1, 1 },
            { 1, 0, 0, 1, 0 },
            { 0, 1, 1, 1, 1 } };
  EXPECT_EQ(true, solution.Maze(maze,2,3));  
}