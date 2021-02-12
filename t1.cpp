#include <iostream>
#include <vector>
#include <algorithm>
#include "helpers.h"
#include "catch.hpp"

/* test implementation of find_if */

#define NUM_TESTS 2.0 

#ifndef MAX_POINTS 
#define MAX_POINTS 17.0
#pragma message ( "MAX_POINTS is not defined" )
#endif 

int correct=0;


TEST_CASE("Test0", "0") {
 std::vector<int> v {1,9,3,4,2,2,2,5,2};
 auto d=std::distance(v.begin(),::find_if(v.begin(),v.end(),
			 [](int n){return ((n%2==0)&& n<4);}
			 
			 ));
 CHECKED_IF(d==4){
  ++correct;
 }
}

TEST_CASE("Test1", "1") {
 std::vector<int> v {6,9,7,4,2,2,2,5,2};
 auto d=std::distance(v.begin(),::find_if(v.begin(),v.end(),
			 [](int n){return ((n%2==1)&& n<6);}
			 
			 ));
 CHECKED_IF(d==7){
	 ++correct;
 }
 #ifdef PARTIAL
   std::cerr<<(correct* MAX_POINTS/NUM_TESTS)<<"\n";
 #else 
   if(correct==NUM_TESTS)std::cerr<<MAX_POINTS;
   else std::cerr<<0<<"\n";
 #endif 
}
