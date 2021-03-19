#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::string input1,input2;
  input1 =  "A man, a 'plan', a canal, Panama!";
  input2 =  "No 'x' in Ni";

  EXPECT_EQ(true, solution.AppPa(input1));
  EXPECT_EQ(false, solution.AppPa(input2));
}