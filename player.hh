#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

class player{
    public:
    bool isplayer;
    int money;
    vector<pair<int,int>>hand;
    player(){
    }
    player(int i){
        if(i==0){
            isplayer=true;
            money=0;
        }
        else{
            isplayer=false;
            money=0;
        }
    }
    void getmoney(int a){
        this->money=a;
    }
    void bet(int a){
        this->money-=a;
    }
    void printcard(){
        if(isplayer)printf("user deck:\n");
        else printf("ai deck:\n");
        vector<pair<int,int>>::iterator iter;
        for(iter=this->hand.begin();iter!=this->hand.end();iter++){
            switch(iter->first){
                case 0:{printf("A ");break;}
                case 10:{printf("J ");break;}
                case 11:{printf("Q ");break;}
                case 12:{printf("K ");break;}
                default: printf("%d ",(iter->first)+1);
            }
            switch(iter->second){
                case 0:printf("♠\n");break;
                case 1:printf("♣\n");break;
                case 2:printf("♦\n");break;
                case 3:printf("♥\n");break;
            }
        }
    }

};