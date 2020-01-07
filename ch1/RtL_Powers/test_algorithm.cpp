/*
    you compile this file into executable and then run it
*/

#define CATCH_CONFIG_MAIN  
#include "./../../.catch.hpp"
#include "algorithm.cpp"

TEST_CASE( "rtl_powers are computed", "[rtl_power]" ) {
    REQUIRE( rtl_power(1,1) == 1 );
    REQUIRE( rtl_power(2,3) == 8 );
    REQUIRE( rtl_power(-1,1) == -1 );
}