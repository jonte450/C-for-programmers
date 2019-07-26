//header file for main.cpp
/*TODO: 
*-  create a class called Pet
*- it inherits from both the class Patient 
*- and the class Dog
*- Pet has one private member: name
*- Pet has public getName and setName functions.
*/
#include<iostream>
#include<string>

using namespace std;

class Patient
{
    private:
        int idNumber;
    public:
        Patient();
        void setIdNumber(int idIn);
        int getIdNumber();
};

Patient::Patient()
{
    idNumber = 0;
}

void Patient::setIdNumber(int idIn)
{
    idNumber = idIn;
}

int Patient::getIdNumber()
{
    return idNumber;
}

class Dog
{
    private:
        string breed;
        string name;
    public:
        Dog();
        void setBreed(string breedIn);
        void setName(string nameIn);
        string getBreed();
};

Dog::Dog()
{
    breed = "NA";
    name = "NA";

}


void Dog::setName(string nameIn){
    name = nameIn;
}

void Dog::setBreed(string breedIn)
{
    breed = breedIn;
}

string Dog::getBreed()
{
    return breed;
}

class Pet: public Patient , public Dog{
    private:
        string name;
    public:
        Pet();
        string getName();
        void setName(string nameIn);
};

Pet::Pet(){
    name = "NA";
}

void Pet::setName(string nameIn)
{
    name = nameIn;
}

string Pet::getName()
{
    return name;
}

