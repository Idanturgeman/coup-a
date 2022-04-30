#include "Assassin.hpp"
namespace coup
{
    static int numOfAssassin = 0;
    Assassin::Assassin(Game &game, string name) : Player(game, name)
    {
        numOfAssassin++;
    }
    void Assassin::role(){
        cout<<"Assassin"<<endl;
    }
    Assassin::~Assassin()
    {
        numOfAssassin--;
    }
}