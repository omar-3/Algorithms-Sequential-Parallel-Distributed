#define CATCH_CONFIG_MAIN  
#include "./../../.catch.hpp"
#include "algorithm.cpp"

TEST_CASE( "square are computed", "[square]" ) {
    REQUIRE( square(1) == 1 );
    REQUIRE( square(9000) == 94.8683 );

}