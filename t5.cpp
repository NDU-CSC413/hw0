#include <iostream>
#include <vector>
#include <iterator>
#include <memory>
#include "helpers.h"
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

/* testing implementation of reverse 
* for non copyable types. 
*/
using up=std::unique_ptr<int>;
#define m(x) std::make_unique<int>(x)

TEST_CASE("Test0", "0") {
  
   std::vector<std::unique_ptr<int>> v;
   for(int i=0;i<20;++i)v.push_back(m(i));
    ::reverse(v.begin(),v.end());

   CHECK((*v[0]==19 && *v[1]==18));
}


