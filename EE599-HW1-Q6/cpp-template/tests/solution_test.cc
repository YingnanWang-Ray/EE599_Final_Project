#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  //std::string actual = solution.PrintHelloWorld();
  //std::string expected = "Yingnan Wang  Student ID #4616805578  I like basketball, PC games and so on";
  int n = -2;
  int expectedneg = -1;
  int actualr = solution.Factorialr(n);
  int actualnr = solution.Factorialnr(n);
  EXPECT_EQ(expectedneg, actualr);
  EXPECT_EQ(expectedneg, actualnr);

  int n1 = 5;
  int expected1 = 120;
  int actualr1 = solution.Factorialr(n1);
  int actualnr1 = solution.Factorialnr(n1);
  EXPECT_EQ(expected1, actualr1);
  EXPECT_EQ(expected1, actualnr1);
}
