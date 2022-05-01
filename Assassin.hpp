#include "Player.hpp"
using namespace std;
namespace coup{
    class Assassin : public Player
    {
    public:
        Assassin(Game &game, string name);
        void block(Player p);
        void role();
        ~Assassin();
    };
}