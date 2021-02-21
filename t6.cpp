#include <iostream>
#include <type_traits>
#include "helpers.h"
#include "test.hpp"

/* testing if class NoCopy is noncopyable
*/
#define NUM_TESTS 1.0 

#ifndef TEST_NAME
#define TEST_NAME "Test6"
#pragma message ( "TEST_NAME is not defined" )
#endif 
#ifndef MAX_POINTS 
#define MAX_POINTS 17.0
#pragma message ( "MAX_POINTS is not defined" )
#endif 
int correct=0;
#define TEST_NAME "Test6"
#define TEST_DESC "testing implementation of NoCopy"
TEST_CASE("Test0", "1") {
NoCopy c;
if constexpr(!std::is_copy_assignable_v<decltype(c)>)
  CHECKED_IF(true){
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

