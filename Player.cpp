#include "Player.hpp"
#include "Game.hpp"
// #include <string>
// #include <stdexcept>
using namespace std;

namespace coup
{

    void Player::income()
    {
        this->_money++;
        this->_game->i = (this->_game->i + 1) % this->_game->playersList.size();
    }
    void Player::foreign_aid()
    {
        // if (this->name.compare(this->game->playersList[this->game->i]))
        //     ;
        // {
        //     throw runtime_error("is not your turn!");
        // }
        this->_money += 2;
        this->_game->i = (this->_game->i + 1) % this->_game->playersList.size();
    }

    void Player::coup(Player p)
    {
        
        for (unsigned int i = 0; i < this->_game->playersList.size(); i++)
            {
                if (!p._name.compare(this->_game->playersList[i]))
                    {
                        this->_game->playersList.erase(this->_game->playersList.begin() + i);
                        return;
                    }
            }
        throw invalid_argument("this player didn't exsict");
        
        this->_money -= 7;
    }

    void Player::role()
    {
        cout << "jobName";
    }
    int Player::coins()
    {
        return getMoney();
    }
    Player::Player(Game &game, string name)
    {
        //setPlayer(Game &game, string name);
        // game.addPlayer(this);
        this->_name = name;
        this->_game = &game;
        this->_game->playersList.push_back(this->_name);
        this->_money = 0;
    }
    Player::~Player()
    {
    }
}