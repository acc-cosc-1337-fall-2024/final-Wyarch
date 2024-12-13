#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "shooter.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify rolls return value from 1 to 6")
{
	Die game;

	for(int i = 0; i < 10; i++)
	{
		int roll_value = game.roll();
		REQUIRE(roll_value > 0);
		REQUIRE(roll_value < 7);
	}
}

TEST_CASE("Verify two dice rolls return value from 2 to 12")
{
	Die die1;
	Die die2;
	Roll game(die1,die2);
	
	for(int i = 0; i < 10; i++)
	{
		game.roll_dice();
		REQUIRE(game.roll_value() > 1);
		REQUIRE(game.roll_value() < 13);
	}
}

TEST_CASE("Verify shooter returns a roll and that result is in the range of 2 to 12")
{
	Die die1;
	Die die2;
	Shooter dice;
	Roll* game;

	for(int i = 0; i < 10; i++)
	{
		game = dice.throw_dice(die1,die2);
		REQUIRE(game->roll_value() > 1);
		REQUIRE(game->roll_value() < 13);
	}
}