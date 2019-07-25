
/*Goal: practice creating and using a class
**Use the class 'Dog' to create to 
**instances of the class, dog1 and dog2.
**Assign dog1 the name: Trixie
**Assign dog2 the name: Kali
**Assign dog1 the license #1234
**Assign dog2 the license #5678
*/
#include"main.hpp"


int main()
{
Dog dog_1,dog_2;
dog_1.setName("Trixie");
dog_1.setLicenseNumber(5678);
     
dog_2.setName("Kali");
dog_2.setLicenseNumber(1234);

dog_1.printInfo();
cout<<"\n";
cout<<"\n";
dog_2.printInfo();

    return 0;
}
