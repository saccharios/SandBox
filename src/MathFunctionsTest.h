#pragma once
#include "gtest/gtest.h"
#include "MathFunctions.h"

class MathFunctionTest : public ::testing::Test
{
	void run();
};

TEST(MathFunctions, doStuff)
{
	MathFunctions functions;
	EXPECT_EQ("",functions.doStuff());
}
TEST_F(MathFunctionTest, doStuff)
{
	MathFunctions functions;
	EXPECT_EQ("",functions.doStuff());
}
