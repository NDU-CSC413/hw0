#include <iostream>
#include <vector>
#include <algorithm>
#include "helpers.h"
#include "catch.hpp"

/* testing implementation of remove_if*/

#define NUM_TESTS 2.0 

#ifndef MAX_POINTS 
#define MAX_POINTS 17.0
#pragma message ( "MAX_POINTS is not defined" )
#endif 

int correct=0;

TEST_CASE("Test0", "0") {
 std::vector<int> v {1,9,3,4,2,2,2,5,2};
 auto itr=::remove_if(v.begin(),v.end(),
			 [](int n){return ((n%2==0)&& n<4);}
			 
			 );
 v.erase(itr,v.end());
 CHECKED_IF(v.size()==5){
	 ++correct;
 }
}

TEST_CASE("Test1", "1") {
 std::vector<int> v {61,9,63,74,5,43,5,23,27,2,5,2,8,7,9,8,7,78};
 int org=v.size();
 auto itr=::remove_if(v.begin(),v.end(),
			 [](int n){return ((n%2==1)&& n<6);}
			 
			 );
 v.erase(itr,v.end());
 CHECKED_IF(v.size()==(org-3)){
	 ++correct;
 }
 #ifdef PARTIAL
   std::cerr<<(correct* MAX_POINTS/NUM_TESTS)<<"/"<<MAX_POINTS<<std::endl;
 #else 
   if(correct==NUM_TESTS)std::cerr<<MAX_POINTS<<"/"<<MAX_POINTS<<std::endl;
   else std::cerr<<0<<"/"<<MAX_POINTS<<std::endl;
 #endif 
}
