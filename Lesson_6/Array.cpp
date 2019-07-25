/*Goal: Practice array manipulation in C++. 
**The user will input 40 integers. 
**Put them into an array. Then print the array in the order the numbers were
**entered. Then print in reverse order. Then sort the array in ascending order 
**and print it. 
**The each print of the array should separate the numbers in the array by
**one space. 
**For example: the array were [3,4,55] the printout would be 3 4 55
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{    
    int change = 0;
    int get_input = 0;
    int userInput[40];
    for(int i = 0; i <40; i++)
    {
       cin>>get_input;
       userInput[i] = get_input;
    }
    for(int j = 0; j < 40;j++){
        //cout<<"Printing the numbers of the user: "<< userInput[j]<<".\n";
        cout<<userInput[j]<<" ";
    }
    cout<<"\n\n";
    for(int k = 39; k >= 0; k--){
        cout<<userInput[k]<<" ";
    }
    
    for(int l = 0; l<40; l++){
        for(int m =l+1; m<40; m++){
            if(userInput[l] > userInput[m]){
                change = userInput[l];
                userInput[l] = userInput[m];
                userInput[m] = change;
            }
        }
    }
    cout<<"\n\n";
    for(int e = 0; e<40;e++){
        cout<<userInput[e]<<" ";
    }
    return 0;
}
