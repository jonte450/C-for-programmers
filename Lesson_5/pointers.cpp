/*For this program print for each variable
**print the value of the variable, 
**then print the address where it is stored. 
*/
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string name;
    int givenInt;
    float givenFloat;
    double givenDouble;
    string givenString;
    char givenChar;
    int *pointerGivenInt;
    int **pointerPointerGivenInt;

    pointerGivenInt = &givenInt;
    pointerPointerGivenInt = &pointerGivenInt;

   //Get the values of each variable
    cout<<"integer = \n";
    cin>>givenInt;
    cout<<"float = \n";
    cin>>givenFloat;
    cout<<"double = \n";
    cin>>givenDouble;
    //We need to use cin.ignore so cin will ignore 
   //the characters in the buffer leftover
   //from the givenDouble
    cin.ignore();
    cout<<"character = \n";
    cin>>givenChar;

    cout<<"string = \n";
    cin.ignore();
    getline (cin,givenString);


    //The value stored in the data
    cout<<"integer = "<<givenInt<<"\n";
    cout<<"float = "<<givenFloat<<"\n";
    cout<<"double = "<<givenDouble<<"\n";
    cout<<"string = "<<givenString<<"\n";
    cout<<"character = "<<(char)givenChar<<"\n\n";

    //The address of the data - use pointers
    cout<<"address integer = "<<&givenInt<<"\n";
    cout<<"address float = "<<&givenFloat<<"\n";
    cout<<"address double = "<<&givenDouble<<"\n";
    cout<<"address string = "<<&givenString<<"\n";
    cout<< "address character = " << (void *) &givenChar<<"\n\n";

   //Use indirection to the get the value stored at the address
    cout<< "pointer of givenInt = " << *pointerGivenInt<<"\n";
    cout<< "pointer of pointer of givenInt = " << **pointerPointerGivenInt<< "\n";

    return 0;
}

