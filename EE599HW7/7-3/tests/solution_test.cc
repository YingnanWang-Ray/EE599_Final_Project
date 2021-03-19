#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>
using namespace std;

TEST(Function0, Return0) {
  std::map<int, std::set<int>> vertices{
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
  Graph g(vertices);
  map<int, int> excepted_dis{
    {0,{0}},
    {1,{1}},
    {4,{3}},
    {5,{1}},
    {2,{1}},
    {3,{2}},
    {6,{3}},
    {8,{2}},
    {7,{2}}
  };//g.dis
  map<int, set<int>> expected_map{
    {0,{0}},
    {1,{0,1}},
    {2,{0,2}},
    {3,{0,1,3}},
    {4,{0,1,3,4}},
    {5,{0,5}},
    {6,{0,1,3,6}},
    {7,{0,2,7}},
    {8,{0,5,8}}
  };//ans_map
  EXPECT_EQ(expected_map, g.SDP_ALL());  
  EXPECT_EQ(excepted_dis,g.dis);
}

TEST(Function1, Return1) {
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
  map<int, int> excepted_dis{
    {0,{0}},
    {1,{1}},
    {4,{3}},
    {5,{1}},
    {2,{1}},
    {3,{2}},
    {6,{3}}
  };//g.dis
  map<int, set<int>> expected_map{
    {0,{0}},
    {1,{0,1}},
    {2,{0,2}},
    {3,{0,1,3}},
    {4,{0,1,3,4}},
    {5,{0,5}},
    {6,{0,1,3,6}}
  };//ans_map
  EXPECT_EQ(expected_map, g.SDP_ALL());  
  EXPECT_EQ(excepted_dis,g.dis);
}