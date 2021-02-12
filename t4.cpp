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
#define TEST_NAME "Test4"
#define TEST_DESC "testing implementation of reverse"
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
 std::cout<<TEST_NAME<<"("<<TEST_DESC<<"):";

#ifdef PARTIAL
   std::cout<<(correct* MAX_POINTS/NUM_TESTS)<<"/"<<MAX_POINTS<<std::endl;
 #else 
   if(correct==NUM_TESTS)std::cout<<MAX_POINTS<<"/"<<MAX_POINTS<<std::endl;
   else std::cout<<0<<"/"<<MAX_POINTS<<std::endl;
 #endif 
}

