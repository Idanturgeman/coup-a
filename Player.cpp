#include "Player.hpp"
//#include "Game.hpp"
using namespace std;

namespace coup
{
    static int numOfPlayers = 0;
    static int numOfIncomes = 0;
    static int numOfForeign_aids = 0;
    static int numOfCoups = 0;
    static int numOfRoles = 0;
    static int numOfCoins = 0;
    Player::Player(Game &game, string name)
    {
        int play = 0;
        this->_name = name;
        this->_game = &game;
        this->_game->playersList.push_back(this->_name);
        this->_money = 0;
        numOfPlayers++;
    }
    void Player::income()
    {
        int inc = 0;
        this->_money++;
        this->_game->i = (this->_game->i + 1) % this->_game->playersList.size();
        numOfIncomes++;
    }
    void Player::foreign_aid()
    {
        int fore = 0;
        this->_money += 2;
        this->_game->i = (this->_game->i + 1) % this->_game->playersList.size();
        numOfForeign_aids++;
    }

    void Player::coup(Player p)
    {
        int cou = 0;
        for (unsigned int i = 0; i < this->_game->playersList.size(); i++)
            {
                int j = 0;
                if (!p._name.compare(this->_game->playersList[i]))
                    {
                        j++;
                        this->_game->playersList.erase(this->_game->playersList.begin() + i);
                        return;
                    }
            }
        throw invalid_argument("this player didn't exsict");
        numOfCoups++;
        this->_money -= 7;
    }

    void Player::role()
    {
        numOfRoles++;
        cout << "jobName";
    }
    int Player::coins()
    {
        numOfCoins++;
        return getMoney();
    }
    
    Player::~Player()
    {
        numOfPlayers--;
    }
}