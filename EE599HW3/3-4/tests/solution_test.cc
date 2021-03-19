#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Match0, Return0) {
  Solution solution;
  std::string str = "(a+b)[c*d]{5g+h}";
  bool expected = true;
  bool actual = solution.match(str);
  EXPECT_EQ(expected, actual);
}

TEST(Match1, Return1) {
  Solution solution;
  std::string str = "(7h+[5c)+7]";
  bool expected = false;
  bool actual = solution.match(str);
  EXPECT_EQ(expected, actual);
}

TEST(Match2, Return2) {
  Solution solution;
  std::string str = "{2k++[5--*j]}";
  bool expected = true;
  bool actual = solution.match(str);
  EXPECT_EQ(expected, actual);
}

TEST(Match3, Return3) {
  Solution solution;
  std::string str = "{2k+[5j]}";
  bool expected = true;
  bool actual = solution.match(str);
  EXPECT_EQ(expected, actual);
}
TEST(Match4, Return4) {
  Solution solution;
  std::string str = "((a+b]";
  bool expected = false;
  bool actual = solution.match(str);
  EXPECT_EQ(expected, actual);
}