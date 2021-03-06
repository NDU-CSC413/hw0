#include <iostream>
#include <vector>
#include <algorithm>
#include "helpers.h"
#include "test.hpp"

/* testing implementation of remove_if*/

#define NUM_TESTS 2.0 

#ifndef TEST_NAME
#define TEST_NAME "Test0"
#pragma message ( "TEST_NAME is not defined" )
#endif 

#ifndef MAX_POINTS 
#define MAX_POINTS 17.0
#pragma message ( "MAX_POINTS is not defined" )
#endif 
#define TEST_NAME "Test3"
#define TEST_DESC "testing implementation of remove_if"
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
