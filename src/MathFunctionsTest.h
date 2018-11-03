#pragma once
#include "gtest/gtest.h"
#include "MathFunctions.h"

TEST(MathFunctions, doStuff)
{
	MathFunctions functions;
	EXPECT_EQ("",functions.doStuff());
}

