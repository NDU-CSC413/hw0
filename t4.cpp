#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <random>
#include <memory>
#include "helpers.h"
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.h"


TEST_CASE("Test0", "0") {
 std::vector<int> v {1,9,3,4,2,2,2,5,2};
 std::vector<int> u=v;
 std::reverse(u.begin(),u.end());
 ::reverse(v.begin(),v.end());
 REQUIRE(u==v);
}


TEST_CASE("Test1", "1") {
std::unique_ptr<int> a=std::make_unique<int>(13);
std::unique_ptr<int> b=std::make_unique<int>(18);
std::unique_ptr<int> c=std::make_unique<int>(9);
std::vector<std::unique_ptr<int>> v;
v.push_back(std::move(a));
v.push_back(std::move(b));
v.push_back(std::move(c));
::reverse(v.begin(),v.end());

// REQUIRE(u==v);
}

