/*
    you compile this file into executable and then run it
*/

#define CATCH_CONFIG_MAIN  
#include "./../../.catch.hpp"
#include "algorithm.cpp"

TEST_CASE( "naive_gcd are computed", "[naive_gcd]" ) {
    REQUIRE( naive_gcd(1,1) == 1 );
    REQUIRE( naive_gcd(108,50) == 2 );
    REQUIRE( naive_gcd(25,5) == 5 );
}