#include <iostream>
#include <vector>
#include <memory>
#include "helpers.h"
#include "test.hpp"

/* testing implementation of reverse 
* for non copyable types. 
*/

#define NUM_TESTS 1.0 

#ifndef TEST_NAME
#define TEST_NAME "Test5"
#pragma message ( "TEST_NAME is not defined" )
#endif 
#ifndef MAX_POINTS 
#define MAX_POINTS 17.0
#pragma message ( "MAX_POINTS is not defined" )
#endif 
int correct=0;
#define TEST_NAME "Test5"
#define TEST_DESC "testing implementation of nc_reverse"
using up=std::unique_ptr<int>;
#define m(x) std::make_unique<int>(x)

TEST_CASE("Test0", "0") {
  
   std::vector<std::unique_ptr<int>> v;
   for(int i=0;i<20;++i)v.push_back(m(i));
    ::reverse(v.begin(),v.end());

   CHECKED_IF((*v[0]==19 && *v[1]==18)){
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


