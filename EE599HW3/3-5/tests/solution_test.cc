#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>
#include<iostream>
using namespace std;

TEST(Match0, Return0) {
    AcademicRecord obj1;
    obj1.Maths = 95;
    obj1.Computers = 95;
    obj1.Physics = 95;
    obj1++;
    int expected0,expected1,expected2;
    int actual0,actual1,actual2;
    actual0 = obj1.Maths;
    actual1 = obj1.Computers;
    actual2 = obj1.Physics;
    expected0 = expected1 = expected2 = 100;
    EXPECT_EQ(expected0, actual0);
    EXPECT_EQ(expected1, actual1);
    EXPECT_EQ(expected2, actual2);
}//No more than 100

TEST(Match1, Return1) {
    AcademicRecord obj1;
    obj1.Maths = 5;
    obj1.Computers = 10;
    obj1.Physics = 15;
    obj1--;
    int expected0,expected1,expected2;
    int actual0,actual1,actual2;
    actual0 = obj1.Maths;
    actual1 = obj1.Computers;
    actual2 = obj1.Physics;
    expected0 = expected1 = expected2 = 0;
    EXPECT_EQ(expected0, actual0);
    EXPECT_EQ(expected1, actual1);
    EXPECT_EQ(expected2, actual2);
}//No less than 0

TEST(Match2, Return2) {
    AcademicRecord obj1;
    obj1.Maths = 95;
    obj1.Computers = 80;
    obj1.Physics = 15;
    obj1--;
    int expected0,expected1,expected2;
    int actual0,actual1,actual2;
    actual0 = obj1.Maths;
    actual1 = obj1.Computers;
    actual2 = obj1.Physics;
    expected0 = 75;
    expected1 = 60;
    expected2 = 0;
    EXPECT_EQ(expected0, actual0);
    EXPECT_EQ(expected1, actual1);
    EXPECT_EQ(expected2, actual2);
}//Test --


TEST(Match3, Return3) {
    AcademicRecord obj1;
    obj1.Maths = 95;
    obj1.Computers = 80;
    obj1.Physics = 15;
    obj1++;
    int expected0,expected1,expected2;
    int actual0,actual1,actual2;
    actual0 = obj1.Maths;
    actual1 = obj1.Computers;
    actual2 = obj1.Physics;
    expected0 = 100;
    expected1 = 90;
    expected2 = 25;
    EXPECT_EQ(expected0, actual0);
    EXPECT_EQ(expected1, actual1);
    EXPECT_EQ(expected2, actual2);
}//Test ++

TEST(Match4, Return4) {
    AcademicRecord obj1;
    int in = 3;
    obj1.Maths = 99;
    obj1.Computers = 80;
    obj1.Physics = 15;
    obj1+=3;
    int expected0,expected1,expected2;
    int actual0,actual1,actual2;
    actual0 = obj1.Maths;
    actual1 = obj1.Computers;
    actual2 = obj1.Physics;
    expected0 = 100;
    expected1 = 83;
    expected2 = 18;
    EXPECT_EQ(expected0, actual0);
    EXPECT_EQ(expected1, actual1);
    EXPECT_EQ(expected2, actual2);
}//Test +=

TEST(Match5, Return5) {
    AcademicRecord obj1;
    int dec = 13;
    obj1.Maths = 99;
    obj1.Computers = 83;
    obj1.Physics = 10;
    obj1-=13;
    int expected0,expected1,expected2;
    int actual0,actual1,actual2;
    actual0 = obj1.Maths;
    actual1 = obj1.Computers;
    actual2 = obj1.Physics;
    expected0 = 86;
    expected1 = 70;
    expected2 = 0;
    EXPECT_EQ(expected0, actual0);
    EXPECT_EQ(expected1, actual1);
    EXPECT_EQ(expected2, actual2);
}//Test -=

//********************Test obj2********************
TEST(Match00, Return00) {
    AcademicRecord obj1,obj2;
    obj1.Maths = 95;
    obj1.Computers = 95;
    obj1.Physics = 95;
    obj2=obj1;
    obj2++;
    int expected0,expected1,expected2;
    int actual0,actual1,actual2;
    actual0 = obj2.Maths;
    actual1 = obj2.Computers;
    actual2 = obj2.Physics;
    expected0 = expected1 = expected2 = 100;
    EXPECT_EQ(expected0, actual0);
    EXPECT_EQ(expected1, actual1);
    EXPECT_EQ(expected2, actual2);
}//No more than 100

TEST(Match01, Return01) {
    AcademicRecord obj1,obj2;
    obj1.Maths = 5;
    obj1.Computers = 10;
    obj1.Physics = 15;
    obj2=obj1;
    obj2--;
    int expected0,expected1,expected2;
    int actual0,actual1,actual2;
    actual0 = obj2.Maths;
    actual1 = obj2.Computers;
    actual2 = obj2.Physics;
    expected0 = expected1 = expected2 = 0;
    EXPECT_EQ(expected0, actual0);
    EXPECT_EQ(expected1, actual1);
    EXPECT_EQ(expected2, actual2);
}//No less than 0

TEST(Match02, Return02) {
    AcademicRecord obj1,obj2;
    obj1.Maths = 95;
    obj1.Computers = 80;
    obj1.Physics = 15;
    obj2=obj1;
    obj2--;
    int expected0,expected1,expected2;
    int actual0,actual1,actual2;
    actual0 = obj2.Maths;
    actual1 = obj2.Computers;
    actual2 = obj2.Physics;
    expected0 = 75;
    expected1 = 60;
    expected2 = 0;
    EXPECT_EQ(expected0, actual0);
    EXPECT_EQ(expected1, actual1);
    EXPECT_EQ(expected2, actual2);
}//Test --


TEST(Match03, Return03) {
    AcademicRecord obj1,obj2;
    obj1.Maths = 95;
    obj1.Computers = 80;
    obj1.Physics = 15;
    obj2=obj1;
    obj2++;
    int expected0,expected1,expected2;
    int actual0,actual1,actual2;
    actual0 = obj2.Maths;
    actual1 = obj2.Computers;
    actual2 = obj2.Physics;
    expected0 = 100;
    expected1 = 90;
    expected2 = 25;
    EXPECT_EQ(expected0, actual0);
    EXPECT_EQ(expected1, actual1);
    EXPECT_EQ(expected2, actual2);
}//Test ++

TEST(Match04, Return04) {
    AcademicRecord obj1,obj2;
    int in = 3;
    obj1.Maths = 99;
    obj1.Computers = 80;
    obj1.Physics = 15;
    obj2=obj1;
    obj2+=3;
    int expected0,expected1,expected2;
    int actual0,actual1,actual2;
    actual0 = obj2.Maths;
    actual1 = obj2.Computers;
    actual2 = obj2.Physics;
    expected0 = 100;
    expected1 = 83;
    expected2 = 18;
    EXPECT_EQ(expected0, actual0);
    EXPECT_EQ(expected1, actual1);
    EXPECT_EQ(expected2, actual2);
}//Test +=

TEST(Match05, Return05) {
    AcademicRecord obj1,obj2;
    int dec = 13;
    obj1.Maths = 99;
    obj1.Computers = 83;
    obj1.Physics = 10;
    obj2=obj1;
    obj2-=13;
    int expected0,expected1,expected2;
    int actual0,actual1,actual2;
    actual0 = obj2.Maths;
    actual1 = obj2.Computers;
    actual2 = obj2.Physics;
    expected0 = 86;
    expected1 = 70;
    expected2 = 0;
    EXPECT_EQ(expected0, actual0);
    EXPECT_EQ(expected1, actual1);
    EXPECT_EQ(expected2, actual2);
}//Test -=

TEST(Match6, Return6) {
    AcademicRecord obj1,obj2;
    int dec = 13;
    obj1.Maths = 99;
    obj1.Computers = 83;
    obj1.Physics = 10;
    obj2=obj1;
    bool expected = true;
    EXPECT_EQ(expected, obj1==obj2);
}//Test ==

TEST(Match06, Return06) {
    AcademicRecord obj1,obj2;
    int dec = 13;
    obj1.Maths = 99;
    obj1.Computers = 83;
    obj1.Physics = 10;
    obj2.Maths = 98;
    obj2.Computers = 83;
    obj2.Physics = 1;
    bool expected = false;
    EXPECT_EQ(expected, obj1==obj2);
}//Test ==