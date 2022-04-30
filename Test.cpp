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
// using namespace coup;

TEST_CASE("Good input")
{
    Game game_1{};

	/* This player drew the "Duke" card, his name is Moshe
	and he is a player in game_1 */
	Duke duke{game_1, "Messi"};
	Assassin assassin{game_1, "Ronaldo"};
	Ambassador ambassador{game_1, "Neymar"};
	Captain captain{game_1, "Zidan"};
	Contessa contessa{game_1, "Pele"};
	CHECK(game_1.turn() == "Messi");
	duke.income();
	CHECK(duke.coins() == 1);
	assassin.income();
	CHECK(assassin.coins() == 1);
	ambassador.foreign_aid();
	CHECK(ambassador.coins() == 2);
	CHECK(game_1.turn() == "Zidan");
	captain.foreign_aid();
	CHECK(captain.coins() == 2);
	contessa.income();
	CHECK(contessa.coins() == 1);
	CHECK(game_1.turn() == "Messi");
	duke.foreign_aid();
	CHECK(duke.coins() == 3);
	assassin.foreign_aid();
	CHECK(assassin.coins() == 3);
	ambassador.foreign_aid();
	CHECK(ambassador.coins() == 4);
	CHECK(game_1.turn() == "Zidan");
	captain.foreign_aid();
	CHECK(captain.coins() == 4);
	contessa.income();
	CHECK(contessa.coins() == 2);
	CHECK(game_1.turn() == "Messi");
	duke.income();
	CHECK(duke.coins() == 4);
	CHECK(game_1.turn() == "Ronaldo");
	assassin.income();
	CHECK(assassin.coins() == 4);
	ambassador.foreign_aid();
	CHECK(ambassador.coins() == 6);
	CHECK(game_1.turn() == "Zidan");
	captain.income();
	CHECK(captain.coins() == 5);
	CHECK(game_1.turn() == "Pele");
	contessa.foreign_aid();
	CHECK(contessa.coins() == 4);


	
}