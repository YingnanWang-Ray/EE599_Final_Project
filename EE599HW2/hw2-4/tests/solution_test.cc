#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  int a0 = 666;
  int b0 = 999;
  int a1,a2;
  a1 = a2 = a0;
  int b1,b2;
  b1 = b2 = b0;
  solution.Swap(a1,b1);
  solution.Swap(&a2,&b2);
  EXPECT_EQ(a0, b1);
  EXPECT_EQ(b0, a1);
  EXPECT_EQ(a0, b2);
  EXPECT_EQ(b0, a2); 
}