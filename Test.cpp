#include "doctest.h"
#include "Game.hpp"
#include "Player.hpp"
#include "Contessa.hpp"
#include "Duke.hpp"
#include "Captain.hpp"
#include "Ambassador.hpp"
#include "Assassin.hpp"
#include <string>
#include <stdexcept>
#include <iostream>
using namespace coup;
using namespace std;

TEST_CASE("Good input")
{
	static int numOfDukes = 0;
	static int numOfAssassins = 0;
	static int numOfAmbassadors = 0;
	static int numOfCaptains = 0;
	static int numOfContessas = 0;
    Game game{};
	Duke duke{game, "Messi"};
	numOfDukes++;
	Assassin assassin{game, "Ronaldo"};
	numOfAssassins++;
	Ambassador ambassador{game, "Neymar"};
	numOfAmbassadors++;
	Captain captain{game, "Zidan"};
	numOfCaptains++;
	Contessa contessa{game, "Pele"};
	numOfContessas++;
	duke.income();
	CHECK(duke.coins() == 1);
	assassin.income();
	CHECK(assassin.coins() == 1);
	ambassador.foreign_aid();
	CHECK(ambassador.coins() == 2);
	CHECK(game.turn() == "Zidan");
	captain.foreign_aid();
	CHECK(captain.coins() == 2);
	contessa.income();
	CHECK(contessa.coins() == 1);
	CHECK(game.turn() == "Messi");
	duke.foreign_aid();
	CHECK(duke.coins() == 3);
	assassin.foreign_aid();
	CHECK(assassin.coins() == 3);
	ambassador.foreign_aid();
	CHECK(ambassador.coins() == 4);
	CHECK(game.turn() == "Zidan");
	captain.foreign_aid();
	CHECK(captain.coins() == 4);
	contessa.income();
	CHECK(contessa.coins() == 2);
	CHECK(game.turn() == "Messi");
	duke.income();
	CHECK(duke.coins() == 4);
	CHECK(game.turn() == "Ronaldo");
	assassin.income();
	CHECK(assassin.coins() == 4);
	ambassador.foreign_aid();
	CHECK(ambassador.coins() == 6);
	CHECK(game.turn() == "Zidan");
	captain.income();
	CHECK(captain.coins() == 5);
	CHECK(game.turn() == "Pele");
	contessa.foreign_aid();
	CHECK(contessa.coins() == 4);
}