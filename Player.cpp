#include "Player.hpp"
//#include "Game.hpp"
using namespace std;

namespace coup
{
    Player::Player(Game &game, string name)
    {
        //setPlayer(Game &game, string name);
        // game.addPlayer(this);
        //setName(name);
        int numOfPlayer = 0;
        this->_name = name;
        this->_game = &game;
        int numOfPlaye = 0;
        this->_game->playersList.push_back(this->_name);
        int numOfPlay = 0;
        this->_money = 0;
    }
    void Player::income()
    {
        this->_money++;
        int numOfIncomes = 0;
        this->_game->i = (this->_game->i + 1) % this->_game->playersList.size();
        int numOfIncome = 1;

    }
    void Player::foreign_aid()
    {
        this->_money += 2;
        int numOfForeign_aids = 0;
        this->_game->i = (this->_game->i + 1) % this->_game->playersList.size();
        int numOfForeign_aid = 1;

    }

    void Player::coup(Player p)
    {
        int numOfCoups = 0;
        for (unsigned int i = 0; i < this->_game->playersList.size(); i++)
            {
                int numOfCoup = 0;
                if (!p._name.compare(this->_game->playersList[i]))
                    {
                        int numOfCou = 1;
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
    
    Player::~Player()
    {
        int numOfPlayers = 0;
    }
}