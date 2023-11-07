#include "pch.h"
#include "stdio.h"
#include "gtest/gtest.h"
//gtest/1.14.0

TEST(test_only_green, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(test_with_low_expectations1, test_with_low_expectations2) {
	std::cout << "test" << std::endl;
	int a = 2;
	int b = 3;
}

TEST(testMath, myCubeTest)
{
	EXPECT_EQ(1000, 10 * 10 * 10);
}

TEST(test_with_low_expectations3, test_with_low_expectations4) {
	std::cout << "test" << std::endl;
	int a = 2;
	int b = 3;
	char c = 'c';
}

TEST(f1, f2) {

}
