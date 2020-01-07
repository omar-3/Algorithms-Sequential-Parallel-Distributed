/*
    you compile this file into executable and then run it
*/

#define CATCH_CONFIG_MAIN  
#include "./../../.catch.hpp"
#include "algorithm.cpp"

TEST_CASE("ltr_powers are computed","[ltr_power]") {
    REQUIRE(ltr_power(5,2) == 25);
    REQUIRE(ltr_power(10,3) == 1000);
    REQUIRE(ltr_power(-1,3) == -1);
}