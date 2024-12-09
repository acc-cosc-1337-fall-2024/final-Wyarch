#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify rolls return value from 1 to 6")
{
	Die game;

	for(int i = 0; i < 10; i++)
	{
		REQUIRE(game.roll() > 0);
		REQUIRE(game.roll() < 7);
	}
}
