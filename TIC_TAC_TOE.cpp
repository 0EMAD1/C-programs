//TIC TAC TOE GAME
#include <iostream>
#include <stdlib.h>
using namespace std;
int abbbbbbbbbbbb;

char block[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};

int choice;
int row,column;
char turn = 'X';
bool draw = false;
string player1;
string player2;



void display_board(){

    cout<<"            |     |     \n";
    cout<<"         "<<block[0][0]<<"  | "<<block[0][1]<<"   |  "<<block[0][2]<<" \n";
    cout<<"       _____|_____|_____\n";
    cout<<"            |     |     \n";
    cout<<"         "<<block[1][0]<<"  | "<<block[1][1]<<"   |  "<<block[1][2]<<" \n";
    cout<<"        ____|_____|_____\n";
    cout<<"            |     |     \n";
    cout<<"         "<<block[2][0]<<"  | "<<block[2][1]<<"   |  "<<block[2][2]<<" \n";
    cout<<"            |     |     \n";
    cout<<"\n";
        cout<<"\n";
    cout<<"\n";

    
}


void player_turn(){
    if(turn == 'X'){
        cout<<player1<<"'s TURN [x]: ";
    }
    else if(turn == 'O'){
        cout<<player2<<"'s TURN[0]: ";
    }
  
    cin>> choice;
    switch(choice){
        case 1: row=0; column=0; break;
        case 2: row=0; column=1; break;
        case 3: row=0; column=2; break;
        case 4: row=1; column=0; break;
        case 5: row=1; column=1; break;
        case 6: row=1; column=2; break;
        case 7: row=2; column=0; break;
        case 8: row=2; column=1; break;
        case 9: row=2; column=2; break;
        default:
            cout<<"Invalid Move";
    }

    if(turn == 'X' && block[row][column] != 'X' && block[row][column] != 'O')
    {
        block[row][column] = 'X';
        turn = 'O';
    }
    
    else if(turn == 'O' && block[row][column] != 'X' && block[row][column] != 'O')
    {
        block[row][column] = 'O';
        turn = 'X';
    }
    
    else {
        cout<<"Box already filled!n Please choose another!!nn";
        player_turn();
    }
    
    display_board();
}


bool gameover()
{
 
    for(int i=0; i<3; i++)
   
    if(block[i][0] == block[i][1] && block[i][0] == block[i][2] || block[0][i] == block[1][i] && block[0][i] == block[2][i])
   {
    return false;
}

    if(block[0][0] == block[1][1] && block[0][0] == block[2][2] || block[0][2] == block[1][1] && block[0][2] == block[2][0])
    {
    return false;
    }

  
    for(int i=0; i<3; i++)
    for(int j=0; j<3; j++)
    if(block[i][j] != 'X' && block[i][j] != 'O')
    return true;

    
    draw = true;
    return false;
}

int main()
{
    cout<<"GAME INSTRUCTIONS:   \n";
        cout<<"\n";
    cout<<"\n";

    cout<<"FIRST ENTER YOUR NAMES , BY DEFAULT FIRST PLAYER HAS [X] AND SECOND PLAYER HAS[0]\n";
        cout<<"\n";

    cout<<"DIFFRENT BLOCKS ARE NUMBERED AS 1,2,3.. SO ON ,\n";
    cout<<"enter the block number where you want to place your input\n";
    
    cout<<"\nEnter Player1 Name: ";
    getline(cin,player1);
    cout<<"Enter Player2 Name: ";
    getline(cin,player2);

    cout<<"               {{{{TICK TAC TOE}}}}}\n";
    cout<<"                  FOR 2 PLAYERS\n";
    while(gameover()){
        display_board();
        player_turn();
        gameover();
    }
    if(turn == 'X' && draw == false){
        cout<<"Congratulations!Player with 'X' has won the game\n";
    }
    else if(turn == 'O' && draw == false){
        cout<<"Congratulations!Player with 'O' has won the game\n";
    }
    else
    cout<<"GAME DRAW!!\n";
} 
