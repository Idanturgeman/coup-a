#include "Assassin.hpp"
namespace coup
{
    Assassin::Assassin(Game &game, string name) : Player(game, name)
    {
    }

    Assassin::~Assassin()
    {
    }
    void Assassin::role(){
        cout<<"Assassin"<<endl;
    }

}