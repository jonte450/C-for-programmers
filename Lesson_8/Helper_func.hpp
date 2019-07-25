/*header file for main.cpp*/
#include <iostream>
#include <iomanip> 
using namespace std;

class Gameboard
{
    char gameSpace[4][4];
public:
    Gameboard(); //initialize the board with '-' in all 16 spaces
    void setGameSpace(int row,int column, char value); //x,y,or '-' in each game square
    char getGameSpace(int row,int column);
    int fourInRow(); //four 'x's in any row 'wins'
    void printInfo(); //print the game board in a 4x4 matrix
};

Gameboard::Gameboard(){
      for(int row = 0; row < 4; row++){
        for(int col = 0; col<4;col++){
            gameSpace[row][col] = ' ';
        }
      }
}

void Gameboard::setGameSpace(int row,int column,char value){
    gameSpace[row][column] = value;
}

char Gameboard::getGameSpace(int row, int column){
    return gameSpace[row][column];
}

int Gameboard::fourInRow(){
    int count_x = 0;
    int count_y = 0;
    for(int row = 0; row < 4; row++){
        for(int col = 0; col<4;col++){
         if(gameSpace[row][col] == 'x'){
             count_x++;
         }
          if(gameSpace[row][col] == 'y'){
             count_y++;
         }
          
        }
        if(count_x == 4){
            return 1;
        }
        if(count_y == 4){
            return 0;
        }
    }
    
}

void Gameboard::printInfo(){
    cout<<std::setw(5);
        cout<<"\n";

    for(int row = 0; row< 4;row++){
      for(int col=0; col<4;col++){
        cout<< gameSpace[row][col];
      }
      cout<<"\n";

    }
}
