#include "Ambassador.hpp"
namespace coup{
    static int numOfAmbassador = 0;
    Ambassador::Ambassador(Game &game, string name) : Player(game,name)
    {
        numOfAmbassador++;
    }
    void Ambassador::role(){
        cout<<"Ambassador"<<endl;
    }
    void Ambassador::transfer(Player p1, Player p2){
        cout <<"transfer"<<endl;
    }
    Ambassador::~Ambassador()
    {
        numOfAmbassador--;
    }
}