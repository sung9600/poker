#include<cmath>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<ctime>
#include<utility>
using namespace std;
class card{
    private:
    int deck[13][4];

    public:
    pair<int,int> draw(){
        srand((unsigned int)time(0));
        int num,shape;
        do{
            num=rand()%13;
            shape=rand()%4;
        }while(this->deck[num][shape]==1);
        this->deck[num][shape]=1;
        return make_pair(num,shape);
    }
    card(){
    }
    
};