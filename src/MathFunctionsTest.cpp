#include "MathFunctionsTest.h"
#include "MathFunctions.h"

void MathFunctionTest::run()
{
	MathFunctions functions;
	EXPECT_EQ("",functions.doStuff());
}
