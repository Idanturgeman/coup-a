#include "Game.hpp"
namespace coup{
    static int numOfPlayers = 0;
    static int numOfTurns = 0;
    static int numOfGames = 0;
    static int numOfWinners = 0;
    Game::Game()
    {
        numOfGames++;
        this->i = 0;
    }
    vector<string> Game::players()
    {
        numOfPlayers++;
        return this->playersList;
    }
    string Game::turn()
    {
        numOfTurns++;
        if (this->playersList.size() == 0)
        {
            throw runtime_error("their is no players in this game");
        }
        numOfTurns++;
        i = i % playersList.size();
        numOfTurns++;
        return this->playersList[this->i];
    }
    string Game::winner()
    {
        numOfWinners++;
        if (this->playersList.size() != 1)
        {
            throw runtime_error("their is no players in this game");
        }
        numOfWinners++;
        i = i % playersList.size();
        numOfWinners++;
        return this->playersList[this->i];
    } 
    Game::~Game()
    {
        numOfGames--;
    }
}