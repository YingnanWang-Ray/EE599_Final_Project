#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;

  std::vector<int> inp;
  inp={637,231,123,43,69,43,900,10,7,21,99,0,500};
  std::vector<int> expected;
  expected = { 43, 43, 21,10, 7, 0, 69, 900, 637, 500, 231, 123, 99};
  solution.NewArray(inp);

  EXPECT_EQ(expected, inp);

}