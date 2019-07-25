/*Goal: practice std::cin for strings
**Write a program that prompts two users for their
**name, address, and phone number. 
**Print the information to the console in the following format:
**name
**\/t\/t address
**\/t\/tphone number
*/
#include "iostream"
#include "string"
using namespace std;

int main(){
string name = "";
string adress = "";
string phone_number = "";
string name2 = "";
string adress2 = "";
string phone_number2 = "";
cout<<"What's your name?";
getline(cin,name);
cout<<"What's your address?";
getline(cin,adress);
cout<<"What's your phone number?";
getline(cin,phone_number);

cout<<"What's your name?";
getline(cin,name2);
cout<<"What's your address?";
getline(cin,adress2);
cout<<"What's your phone number?";
getline(cin,phone_number2);

cout<<"\n\n"<<name<"\n";
cout<<"\t\t"<<adress<<"\n";
cout<<"\t\t"<<phone_number<<"\n";

cout<<"\n\n"<<name2<"\n";
cout<<"\t\t"<<adress2<<"\n";
cout<<"\t\t"<<phone_number2<<"\n";


return 0;

}
