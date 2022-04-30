#include "Captain.hpp"
namespace coup
{
    static int numOfCaptains = 0;
    Captain::Captain(Game &game, string name) : Player(game,name)
    {
        numOfCaptains++;
    }
    void Captain::role(){
        cout<<"Captain"<<endl;
    }
    void Captain::steal(Player p){
        cout << "stral"<<endl;
    }
    void Captain::block(Player p){
        cout<<"block"<<endl;
    } 
    Captain::~Captain()
    {
        numOfCaptains--;
    }
}