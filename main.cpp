#include<iostream>
#include "game.hh"

int main(){
    game game1;
    for(int i=0;i<5;i++){
        game1.user.hand.push_back(game1.deck.draw());
        game1.ai.hand.push_back(game1.deck.draw());
    }
    game1.user.printcard();
    game1.ai.printcard();
    return 0;
}