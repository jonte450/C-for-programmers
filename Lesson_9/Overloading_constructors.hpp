/*Create a class that has four constructors:
* one that accepts no input parameters
* one that accepts name
* one that accepts license number
* one that accepts name and license number
* The default values are:
name = NA
license = 0
*/

#include<iostream>
#include<string>

using namespace std;

class Dog
{ 
    private: 
    string  name; 
    int license_number;  
    public:
        Dog();
        Dog(string nameIn);
        Dog(int licIn);
        Dog(string nameIn, int licIn);
        string getName();
        int getLicense();
};
    //Default Constructor 
    Dog::Dog() 
    { 
        name ="NA";
        license_number = 0;
    } 
      
 
    Dog::Dog(string name_in) 
    { 
        name = name_in;
        license_number = 0;

    }
    
    Dog::Dog(int licesen_in) 
    { 
        name = "NA";
        license_number = licesen_in;
    } 
    Dog::Dog(string name_in ,int licesen_in) 
    {   
        name = name_in;
        license_number = licesen_in;
    } 
    string Dog::getName(){
        return name;
    }
    
    int Dog::getLicense(){
        return license_number;
    }
 

