#pragma once
#include "Game.hpp"
#include <string>
using namespace std;
namespace coup{
    class Game;
    class Player
    {
    private:
        string _name;
        int _money;
        Game *_game;
    public:
        string getName()const{
            return this->_name;
        }
        int getMoney()const{
            return this->_money;
        }
        void setName(string name){
            this->_name = name;
        }
        void setMoney(int money){
            this->_money = money;
        }
        Player(Game& _game, string _name);
        void setPlayer(Game& game, string name){
            this->_game = &game;
            this->_name = name;
            this->_money = 0;
        }
        void income();
        void foreign_aid();
        void coup(Player p);
        void role();
        int coins();
        ~Player();
    };
    
}