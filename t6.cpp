#include <iostream>
#include <type_traits>
#include "helpers.h"
#include "catch.hpp"

/* testing if class NoCopy is noncopyable
*/
#define NUM_TESTS 1.0 

#ifndef MAX_POINTS 
#define MAX_POINTS 17.0
#pragma message ( "MAX_POINTS is not defined" )
#endif 
int correct=0;

TEST_CASE("Test0", "1") {
NoCopy c;
if constexpr(!std::is_copy_assignable_v<decltype(c)>)
  CHECKED_IF(true){
    ++correct;
  }

 #ifdef PARTIAL
   std::cerr<<(correct* MAX_POINTS/NUM_TESTS)<<"/"<<MAX_POINTS<<std::endl;
 #else 
   if(correct==NUM_TESTS)std::cerr<<MAX_POINTS<<"/"<<MAX_POINTS<<std::endl;
   else std::cerr<<0<<"/"<<MAX_POINTS<<std::endl;
 #endif 

   if(correct!=NUM_TESTS)exit(1);

}

