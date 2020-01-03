/*
    you compile this file into executable and then run it
*/

#define CATCH_CONFIG_MAIN  
#include "./../../catch.hpp"
#include "algorithm.cpp"

TEST_CASE( "naive_powers are computed", "[naive_power]" ) {
    REQUIRE( naive_power(1,1) == 1 );
    REQUIRE( naive_power(2,3) == 8 );
    REQUIRE( naive_power(-1,1) == -1 );
}