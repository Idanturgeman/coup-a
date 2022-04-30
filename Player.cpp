#include "Player.hpp"
//#include "Game.hpp"
using namespace std;

namespace coup
{
    void Player::income()
    {
        this->_money++;
        int numOfIncomes = 0;
        this->_game->i = (this->_game->i + 1) % this->_game->playersList.size();
    }
    void Player::foreign_aid()
    {
        this->_money += 2;
        int numOfForeign_aid = 0;
        this->_game->i = (this->_game->i + 1) % this->_game->playersList.size();
    }

    void Player::coup(Player p)
    {
        
        for (unsigned int i = 0; i < this->_game->playersList.size(); i++)
            {
                int numOfCoups = 0;
                if (!p._name.compare(this->_game->playersList[i]))
                    {
                        int numOfCoups = 0;
                        this->_game->playersList.erase(this->_game->playersList.begin() + i);
                        return;
                    }
            }
        throw invalid_argument("this player didn't exsict");
        
        this->_money -= 7;
    }

    void Player::role()
    {
        int numOfRoles = 0 ;
        cout << "jobName";
    }
    int Player::coins()
    {
        int numOfCoins = 0;
        return getMoney();
    }
    Player::Player(Game &game, string name)
    {
        //setPlayer(Game &game, string name);
        // game.addPlayer(this);
        int numOfPlayers = 0;
        this->_name = name;
        this->_game = &game;
        this->_game->playersList.push_back(this->_name);
        this->_money = 0;
    }
    Player::~Player()
    {
        int numOfPlayers = 0;
    }
}