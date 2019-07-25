/*Header file for main.cpp
**Create a class called Cat.
**Create the following members:
**private members: name, breed, age
**public members: setName, setBreed,setAge
**getName, getBreed, getAge, printInfo*/
#include<string>
#include<iostream>

using namespace std;

class Cat{
    private:
          string name;
          string breed;
          int age;
    public:
         void setName(string inName);
         void setBreed(string inBreed);
         void setAge(int in_Age);
         string getName();
         string getBreed();
         int getAge();
         void printInfo();

};

void Cat::setName(string inName)
{
    name = inName;
}

void Cat::setBreed(string inBreed)
{
    breed = inBreed;
}

void Cat::setAge(int in_Age)
{
  age = in_Age;
}

string Cat::getName()
{
    return name;
}

string Cat::getBreed()
{
    return breed;
}

int Cat::getAge()
{
    return age;
}
void Cat::printInfo()
{
    cout<<name<<" "<<breed<<" "<<age;
}


