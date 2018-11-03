#pragma once
#include "gtest/gtest.h"
#include "MathFunctions.h"


TEST(MathFunctions, doStuff_true)
{
	MathFunctions functions;
	EXPECT_EQ("hello world",functions.doStuff(true));
}
TEST(MathFunctions, doStuff_ena)
{
	MathFunctions functions;
	EXPECT_EQ("good bye",functions.doStuff(false));
}
