/*Find the min and max and average of 15 numbers that a user will input.
**The numbers range from 0 to 100. 
**We will do it now for practice and again later when we learn arrays and 
**functions. So you do not have to keep all fifteen numbers stored in memory.
**HINT: you will need to use scanf for input text.
*/

#include<iostream>

using namespace std;

int main(){
float sum = 0;
float max = 0;
float min = 100;
float get_input = 0;
float counter = 0;
while(counter < 15){
    cin>> get_input;
    sum += get_input;
    if(get_input > max){
        max = get_input;
    }
    if(get_input < min){
        min = get_input;
    }
    counter++;
}
cout << "The average sum is: "<< (sum/15.0)<<"\n";
cout << "The max number is: "<< max <<"\n";
cout << "The min number is: "<< min <<"\n";
    
    
return 0;    
}
