#include <iostream>
#include <vector>
#include <algorithm>
#include "helpers.h"
#include "test.hpp"

/* test implementation of find_if */

#define NUM_TESTS 2.0 

#ifndef TEST_NAME
#define TEST_NAME "Test1"
#pragma message ( "TEST_NAME is not defined" )
#endif 
#ifndef MAX_POINTS 
#define MAX_POINTS 17.0
#pragma message ( "MAX_POINTS is not defined" )
#endif 
#define TEST_NAME "Test1"
#define TEST_DESC "testing implementation of find_if"
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
 std::cout<<"\n"<<TOKEN<<TEST_NAME<<"("<<TEST_DESC<<"):";
 #ifdef PARTIAL
   std::cout<<(correct* MAX_POINTS/NUM_TESTS)
      <<"/"<<MAX_POINTS<<std::endl;
 #else 
   if(correct==NUM_TESTS)
      std::cout<<MAX_POINTS<<"/"<<MAX_POINTS<<std::endl;
   else std::cout<<"0/"<<MAX_POINTS<<std::endl;
 #endif 
}
