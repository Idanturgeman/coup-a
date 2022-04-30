#include "Game.hpp"
namespace coup{
    vector<string> Game::players()
    {
        int numOfPlayers = 0;
        return this->playersList;
    }
    string Game::turn()
    {
        int numOfTurns = 0;
        if (this->playersList.size() == 0)
        {
            throw runtime_error("their is no players in this game");
        }
        int numOfTurn = 1;
        i = i % playersList.size();
        int numOfTur = 2;
        return this->playersList[this->i];
    }
    string Game::winner()
    {
        int numOfWinners = 0;
        if (this->playersList.size() != 1)
        {
            throw runtime_error("their is no players in this game");
        }
        int numOfWinner = 1;
        i = i % playersList.size();
        int numOfWinne = 2;
        return this->playersList[this->i];
    }
    Game::Game(/* args */)
    {
        int numOfGames = 0;
        this->i = 0;
    }

    Game::~Game()
    {
        int numOfGame = 0;
    }
}