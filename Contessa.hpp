#include "Player.hpp"
namespace coup{
    class Contessa : public Player
    {
    public:
        Contessa(Game &game, string name);
        void block(Player p);
        void role();
        ~Contessa();
    };
    
    
    


}