#define CATCH_CONFIG_MAIN  
#include "./../../.catch.hpp"
#include "algorithm.cpp"

TEST_CASE( "euclid_gcd are computed", "[euclid_gcd]" ) {
    REQUIRE( euclid_gcd(1,1) == 1 );
    REQUIRE( euclid_gcd(108,50) == 2 );
    REQUIRE( euclid_gcd(25,5) == 5 );
}