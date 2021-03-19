#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Test0, Test0) {
  map<int, set<int>> vertices
  {
    {0,{1,2,5}},
    {1,{0,2,3}},
    {2,{0,1,7}},
    {7,{2,3}},
    {3,{1,7,4,6}},
    {4,{3}},
    {5,{0,8}},
    {6,{3}},
    {8,{5}}
  };

  map<int, set<int>> result00
  {
    {0, { 0 }}, 
    {1, { 0, 1 }}, 
    {2, { 0, 2 }}, 
    {3, { 0, 1, 3 }}, 
    {4, { 0, 1, 3, 4 }}, 
    {5, { 0, 5 }}, 
    {6, { 0, 1, 3, 6 }}, 
    {7, { 0, 2, 7 }}, 
    {8, { 0, 5, 8 }}
  };

  Graph g(vertices);
  map<int, set<int>>::iterator it;
  map<int, int>::iterator dist;
  map<int, set<int>> ans_map;
  g.BFS(0);
  ans_map = g.SDP_ALL();

  for(auto i:g.result)
    {
        dist = g.dis.find(i);
        // cout << "(" << dist->first << "," << dist->second << ")";
    }
  vector<int> result0 = {0, 1, 2, 5, 3, 7, 8, 4, 6};

  EXPECT_EQ(g.result, result0);
  EXPECT_EQ(ans_map, result00);

}
