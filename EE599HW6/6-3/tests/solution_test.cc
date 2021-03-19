#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>


TEST(Function0, Return0) {
  std::map<int, std::set<int>> vertices{
      {0,{1,2,5}},
      {1,{0,2,3}},
      {2,{0,1,3}},
      {3,{1,2,4,6}},
      {4,{3}},
      {5,{0}},
      {6,{3}}
  };
  Graph g(vertices);
  std::vector<int> result;
  result = g.DFS(0,g.v_);
  std::vector<int> expected = {0,2,3,1,4,6,5};
  EXPECT_EQ(expected, result);  
}

TEST(Function1, Return1) {
  std::map<int, std::set<int>> vertices{
    {0,{1,2,5}},
    {1,{0,3}},
    {2,{0,4}},
    {3,{1,6}},
    {4,{2}},
    {5,{0}},
    {6,{3}}
  };
  Graph g(vertices);
  std::vector<int> result;
  result = g.DFS(0,g.v_);
  std::vector<int> expected = {0,1,3,6,2,4,5};
  EXPECT_EQ(expected, result);  
}

TEST(Function2, Return2) {
  std::map<int, std::set<int>> vertices{
    {0,{1,2,5}},
    {1,{0,4}},
    {2,{0,1,3}},
    {3,{2,6}},
    {4,{1}},
    {5,{0}},
    {6,{3}}
  };
  Graph g(vertices);
  std::vector<int> result;
  result = g.DFS(0,g.v_);
  std::vector<int> expected = {0,2,1,4,3,6,5};
  EXPECT_EQ(expected, result);  
}

