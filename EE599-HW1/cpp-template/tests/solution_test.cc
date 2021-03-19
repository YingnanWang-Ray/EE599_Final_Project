#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::string actual = solution.PrintHelloWorld();
  std::string expected = "Yingnan Wang  Student ID #4616805578  I like basketball, PC games and so on";
  EXPECT_EQ(expected, actual);
}