#include<iostream>
#include<ctime>
#include<cstdlib>

#define ROCK 1
#define PAPER 2
#define SCISSOR 3
using namespace std;

int main(){
    srand((unsigned int) time(NULL));

    int player_chance = 0;
    int computer_chance = 0;
    bool draw = false;

    do{
        cout<<"Select Your Throw."<<endl;
        cout<<"1) Rock"<<endl;
        cout<<"2) Paper"<<endl;
        cout<<"3) Scissors"<<endl;
        cout<<"Selections: ";
        cin>>player_chance;
        cout<<endl;

        computer_chance = (rand()%3) + 1;

        if(computer_chance == ROCK){
            cout<<"Computer Choose ROCK."<<endl;
        }
        else if(computer_chance == PAPER){
            cout<<"Computer Choose PAPER."<<endl;
        }
        else if(computer_chance == SCISSOR){
            cout<<"Computer Choose SCISSOR."<<endl;
        }
        draw = false;
        if(player_chance == computer_chance){
            draw = true;
            cout<<"Draw! Play Again!"<<endl;
        }
        else if(player_chance == ROCK && computer_chance == SCISSOR){
            cout<<"ROCK beats SCISSOR! YOU WIN."<<endl;
        }
        else if(player_chance == ROCK && computer_chance == PAPER){
            cout<<"PAPER beats ROCK! YOU LOSE."<<endl;
        }
        else if(player_chance == PAPER && computer_chance == ROCK){
            cout<<"PAPER beats ROCK! YOU WIN."<<endl;
        }
        else if(player_chance == PAPER && computer_chance == SCISSOR){
            cout<<"SCISSOR beats PAPER! YOU LOSE."<<endl;
        }
        else if(player_chance == SCISSOR && computer_chance == PAPER){
            cout<<"SCISSOR beats PAPER! YOU WIN."<<endl;
        }
        else if(player_chance == SCISSOR && computer_chance == ROCK){
            cout<<"ROCK beats SCISSOR! YOU LOSE."<<endl;
        }
    }while(draw);
    return 0;
}