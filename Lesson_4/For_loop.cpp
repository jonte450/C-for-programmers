/*Write a program that asks a user for five numbers.
**Print out the sum and average of the five numbers.
*/
#include "iostream"
#include "sstream"
#include "string"

using namespace std;

int main(){
float get_number = 0;
float sum = 0;
cout<< "Please enter five numbers:";
for(int i = 0; i<5;i++){
   cin >> get_number;
   sum += get_number;
   cout<<"What's the next number comming:\n";

}

cout<< "The sum is: "<<sum<<".\n";
cout<< "The average of the sum is: "<<sum/5<<".";
    
}

