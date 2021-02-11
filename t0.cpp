#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include "helpers.h"
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

/* testing implementation of find */
TEST_CASE("Test0", "0") {
    int val=2;
 std::vector<int> v {1,8,3,4,2,2,2,5,2};
 auto d=std::distance(v.begin(),::find(v.begin(),v.end(),val));
 REQUIRE(d==4);
}

TEST_CASE("Test1", "1") {
    int val=5;
 std::vector<int> v {1,8,3,4,2,2,2,5,2};
 auto d=std::distance(v.begin(),::find(v.begin(),v.end(),val));
 REQUIRE(d==7);
}
TEST_CASE("Test2", "2") {  
    int val=5;
 std::vector<int> v {1,8,3,4,2,17,20,999,11,54,2,2,5,2};
 auto d=std::distance(v.begin(),::find(v.begin(),v.end(),val));
 REQUIRE(d==12);
}
