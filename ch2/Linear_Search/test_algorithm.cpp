
#define CATCH_CONFIG_MAIN  
#include "./../../.catch.hpp"
#include "algorithm.cpp"
#include <vector>

TEST_CASE( "linear_search are computed", "[linear_search]" ) {
    std::vector<int> list = {53,123,32,123,5,8,19,9012,31};
    REQUIRE( linear_search(list,123) == 1 );
    REQUIRE( linear_search(list,501) == -1 );
    REQUIRE( linear_search(list,5) == 4 );
}