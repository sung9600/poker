#include<cmath>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<ctime>
#include<utility>
#include "player.hh"
#include "card.hh"

using namespace std;
class game{
    public:
    card deck;
    player user;
    player ai;
    int betmoney;
    game(){
        this->user=player(0);
        //printf("player made\n");
        this->ai=player(1);
        //printf("opponent made\n");
        this->deck=card();
        //printf("deck made\n");
        this->betmoney=0;
    }

};