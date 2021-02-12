#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include "helpers.h"
#include "catch.hpp"

#define NUM_TESTS 3.0 

#ifndef MAX_POINTS 
#define MAX_POINTS 17.0
#pragma message ( "MAX_POINTS is not defined" )
#endif 

int correct=0;
/* testing implementation of remove */
TEST_CASE("Test0", "0") {
 std::vector<int> v {1,8,3,4,2,2,2,5,2};
 auto d=::remove(v.begin(),v.end(),2);
 v.erase(d,v.end());
 CHECKED_IF(v.size()==5){
     ++correct;
 }
}

TEST_CASE("Test1", "1") {
 std::vector<int> v {1,8,3,4,2,2,5,2,5,2};
 auto d=::remove(v.begin(),v.end(),5);
 v.erase(d,v.end());
 CHECKED_IF(v.size()==8){
     ++correct;
 }
}

TEST_CASE("Test2", "2") {
 std::vector<int> v {1,5,5,5,17,5,20,999,2,2,5,2};
 auto d=::remove(v.begin(),v.end(),5);
 v.erase(d,v.end());
 CHECKED_IF(v.size()==7){
     ++correct;
 }
 #ifdef PARTIAL
   std::cerr<<(correct* MAX_POINTS/NUM_TESTS)<<"\n";
 #else 
   if(correct==NUM_TESTS)std::cerr<<MAX_POINTS;
   else std::cerr<<0<<"\n";
 #endif 
}
