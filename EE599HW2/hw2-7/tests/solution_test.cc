#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  
  std::string stg0 = "aabbrr";
  std::string stg1 = "ddeekk";
  std::string stg2 = "abcdefg";
  std::map<char,char> expected;
  expected['a'] = 'd';
  expected['b'] = 'e';
  expected['r'] = 'k';
  std::map<char,char> expected2;
  EXPECT_EQ(expected, solution.Mapple(stg0,stg1));
  EXPECT_EQ(expected2, solution.Mapple(stg0,stg2));
}