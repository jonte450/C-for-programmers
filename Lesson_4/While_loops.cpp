/*Goal: In the programming quiz, use a while loop to prompt
**the user to guess a target number. 
**Tell the user if the guess is too high or too low. 
**The user enters -1  or guesses the target number to end 
**the program.
*/

#include <iostream>
#include<sstream>

using namespace std;

int main()
{
    //use 55 as the number to be guessed
    int target = 55;
    int guess = -1;
do{
    std::cout<<"Guess a number between 0 and 100: ";
    std::cin>>guess;
    std::cout<<guess<<"\n";
    if(guess < target){
        cout <<"Too Low!\n";
    }
    else if(guess > target){
        cout << "Too high!\n";
    }
    else if(guess == target){
        cout << "Congratulations your guess match target: "<< target<<"\n";
        break;
    }
    else if(target == -1) {
        cout<< "The game is ending!\n";
        break;
    }
    else {
        cout<< "Please enter a valid number!\n";
    }
}while(1);    
            
    return 0;
}

