#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Add, Return) {
  Solution solution;
  int a = 599;
  int b = 1;
  std::string aa = "ee";
  std::string bb = "EE";

  int actual1 = solution.Add(a,b);
  int expected1 = a+b;

  std::string actual2 = solution.Add(aa,bb);
  std::string expected2 = "eeEE";

  std::string actual3 = solution.Add(bb,a);
  std::string expected3 = "EE599";

  std::string actual4 = solution.Add(b,aa);
  std::string expected4 = "1ee";
  EXPECT_EQ(expected1, actual1);
  EXPECT_EQ(expected2, actual2);
  EXPECT_EQ(expected3, actual3);
  EXPECT_EQ(expected4, actual4);
}