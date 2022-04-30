#include "Contessa.hpp"
namespace coup{
    static int numOfContessa = 0;
    Contessa::Contessa(Game &game, string name) : Player(game, name)
    {
        numOfContessa++;
    }
    void Contessa::role(){
        cout<<"Contessa"<<endl;
    }
    void Contessa::block(Player p){
        cout<< "block"<<endl;
    }
    Contessa::~Contessa()
    {
        numOfContessa--;
    }
}