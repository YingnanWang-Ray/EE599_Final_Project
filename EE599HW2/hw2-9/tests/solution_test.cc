#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::vector<int> inp;
  inp = {1,2,3,4,5,6,7};
  int R = 5;
  solution.NewArray(inp,R);

  std::vector<int> expected;
  expected = {3,4,5,6,7,1,2};
  EXPECT_EQ(expected, inp);

}