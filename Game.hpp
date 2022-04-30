#pragma once
#include <string>
#include <stdexcept>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

namespace coup
{
    class Player;
    class Game
    {  
    public:
        Game();
        ~Game();  
        string winner();
        string turn();
        vector<string> playersList;
        vector<string> players();
        unsigned int i;
    };
} 