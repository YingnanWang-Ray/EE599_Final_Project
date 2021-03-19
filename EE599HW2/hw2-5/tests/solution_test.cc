#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::string input1 = "Basketball";
  std::string expected1 = "basketBall";
  int a = 0;
  int b = 6;

  std::string input2 = "ID4616805578";
  std::string expected2 = "8755086164DI";
  solution.Reverses(input2);

  std::string input3 = "EeIi5566";
  std::string expected3 = "eeii5566";

  EXPECT_EQ(expected1, solution.Swap(input1,a,b));
  EXPECT_EQ(expected2, input2);
  EXPECT_EQ(expected3, solution.lowcase(input3));

}