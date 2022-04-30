#include "Duke.hpp"
namespace coup
{
    static int numOfDukes = 0;
    Duke::Duke(Game &game, string name) : Player(game, name)
    {
        numOfDukes++;
    }
    void Duke::role(){
        cout<<"roleDuke"<<endl;
    }
    void Duke::tax(){
        cout<< "taxDuke"<<endl;
    }
    void Duke::block(Player p){
        cout<<"blockDuke"<<endl;
    }
    Duke::~Duke()
    {
        numOfDukes--;
    }
}