#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include "helpers.h"
//#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#define NUM_TESTS 3.0 

#ifndef MAX_POINTS 
#define MAX_POINTS 17.0
#pragma message ( "MAX_POINTS is not defined" )
#endif 

int correct=0;

/* testing implementation of find */
TEST_CASE("Test 1/3 of find", "1") {
    int val=2;
 std::vector<int> v {1,8,3,4,2,2,2,5,2};
 auto d=std::distance(v.begin(),::find(v.begin(),v.end(),val));
 CHECKED_IF(d==4){
   ++correct;
 }
 
}

TEST_CASE("Test 2/3 of find ", "2") {
    int val=5;
 std::vector<int> v {1,8,3,4,2,2,2,5,2};
 auto d=std::distance(v.begin(),::find(v.begin(),v.end(),val));
 CHECKED_IF(d==7){
   ++correct;
 }

}
TEST_CASE("Test 3/3 of find", "3") {  
    int val=5;
 std::vector<int> v {1,8,3,4,2,17,20,999,11,54,2,2,5,2};
 auto d=std::distance(v.begin(),::find(v.begin(),v.end(),val));
CHECKED_IF(d==12){
   ++correct;
 }
 #ifdef PARTIAL
   std::cerr<<(correct* MAX_POINTS/NUM_TESTS)<<"\n";
 #else 
   if(correct==NUM_TESTS)std::cerr<<MAX_POINTS;
   else std::cerr<<0<<"\n";
 #endif 
}
