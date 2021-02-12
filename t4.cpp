#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
#include "helpers.h"
#include "catch.hpp"

/* testing implementation of reverse */

#define NUM_TESTS 1.0 

#ifndef MAX_POINTS 
#define MAX_POINTS 17.0
#pragma message ( "MAX_POINTS is not defined" )
#endif 

int correct=0;


#define m(x) std::make_unique<int>(x)
TEST_CASE("Test1", "1") {
  std::vector<int> v {1,9,3,4,2,2,2,5,2};
  std::vector<int> u=v;

  ::reverse(v.begin(),v.end());
  std::reverse(u.begin(),u.end());

CHECKED_IF(u==v){
    ++correct;
}
#ifdef PARTIAL
   std::cerr<<(correct* MAX_POINTS/NUM_TESTS)<<"/"<<MAX_POINTS<<"\n";
 #else 
   if(correct==NUM_TESTS)std::cerr<<MAX_POINTS<<"/"<<MAX_POINTS<<"\n";
   else std::cerr<<0<<"/"<<MAX_POINTS<<"\n";
 #endif 
}

