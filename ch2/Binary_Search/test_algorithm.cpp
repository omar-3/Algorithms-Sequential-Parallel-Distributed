#define CATCH_CONFIG_MAIN  
#include "./../../.catch.hpp"
#include "algorithm.cpp"
#include <vector>

TEST_CASE( "binary_search are computed", "[binary_search]" ) {
    std::vector<int> List = {1,5,6,8,9,10,15,19,25,29,32,40};
    REQUIRE( binary_search(List, 8) == 3 );
    REQUIRE( binary_search(List,501) == -1 );
    REQUIRE( binary_search(List,5) == 1 );
}