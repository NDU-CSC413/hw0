#include <iostream>
#include <vector>
#include <memory>
#include "helpers.h"
#include "catch.hpp"

/* testing implementation of reverse 
* for non copyable types. 
*/

#define NUM_TESTS 1.0 

#ifndef MAX_POINTS 
#define MAX_POINTS 17.0
#pragma message ( "MAX_POINTS is not defined" )
#endif 
int correct=0;

using up=std::unique_ptr<int>;
#define m(x) std::make_unique<int>(x)

TEST_CASE("Test0", "0") {
  
   std::vector<std::unique_ptr<int>> v;
   for(int i=0;i<20;++i)v.push_back(m(i));
    ::reverse(v.begin(),v.end());

   CHECKED_IF((*v[0]==19 && *v[1]==18)){
      ++correct;
   }
   #ifdef PARTIAL
   std::cerr<<(correct* MAX_POINTS/NUM_TESTS)<<"/"<<MAX_POINTS<<std::endl;
 #else 
   if(correct==NUM_TESTS)std::cerr<<MAX_POINTS<<"/"<<MAX_POINTS<<std::endl;
   else std::cerr<<0<<"/"<<MAX_POINTS<<std::endl;
 #endif 
}


