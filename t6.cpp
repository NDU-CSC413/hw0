#include <iostream>
#include <type_traits>
#include "helpers.h"
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

/* testing if class NoCopy is noncopyable
*/

TEST_CASE("Test0", "1") {
NoCopy c;
if constexpr(std::is_copy_assignable_v<decltype(c)>)
  REQUIRE(1==0);
else 
  REQUIRE(1==1);

}

