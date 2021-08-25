#include<iostream>
#include<stdlib.h>
#include<map>
#include<time.h>
#include<math.h>
using namespace std;
int rollDie(){
    srand(time(0));
    return 1+rand()%6;
}
void printRowCol(int boardsize,int position){
    int x,y;
    x=(position/boardsize)+1;
        if(x%2){
           y=position%boardsize;
           if(position%boardsize==0)
           {
               x--;
               y++;
           }
        }
        else{
           y=(boardsize+1)-(position%boardsize);
           if(position%boardsize==0)
           {
               x--;
               y--;
           }
        }
        cout<<position<<" -->  ("<<x<<", "<<y<<")\n";
}
int main(){

    int boardsize,position;
    while(1){
    cout<<"Enter the position of player :\n";
    cin>>position;
    if(position == 0)
        break;
    boardsize =10;
    map<int,int> snake,ladder;

    //ladder
    ladder[1]  = 23;
    ladder[8]  = 14;
    ladder[27] = 63;
    ladder[67] = 73;
    ladder[80] = 98;

    //snake
    snake[99] = 54;
    snake[94] = 42;
    snake[91] = 71;
    snake[85] = 62;
    snake[88] = 31;
    snake[78] = 38;
    snake[53] = 26;
    snake[46] = 23;
    snake[28] = 10;
    snake[16] = 3;

    ladder[position]!=0?position=ladder[position]:position;
    snake[position]!=0?position=snake[position]:position;
    printRowCol(boardsize,position);
    }
    return 0;
}


