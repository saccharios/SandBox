#include <iostream>
#include <algorithm>
#include <vector>
#include "gtest/gtest.h"


bool comp1_(int a, int b)
{
   return (a > b);
}
bool comp2(int a, int b)
{
   return (a < b);
}

int main()
{
   vector<int> myvector = {1,8,-3,15};
   vector<int>::iterator i1;
   vector<int>::iterator i2;



   i2 = std::min_element(myvector.begin(), myvector.end(), comp2);
   cout <<*i2<<" ";
   i1 = std::max_element(myvector.begin(), myvector.end(), comp1_);
   cout<<*i1;
   return 0;
}

// int main(int argc, char ** argv)
// {
	// ::testing::InitGoogleTest(&argc, argv);
	// return RUN_ALL_TESTS();
// }
