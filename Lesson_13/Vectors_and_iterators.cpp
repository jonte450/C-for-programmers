// Goal: pracitce constructing vectors
// and their iterators
// Call the vector vFloat
// Call the iterator it

//TODO: Add the necessary libraries
#include "main.hpp"

int main ()
{
  //TODO: create a vector of floats
  std::vector<float> vFloat;  


  std::cout<<"vFloat has "<<vFloat.size()<<" elements\n";
  
  std::cout<<"\n\nAdding 10 elements to the vector\n";
  
  vFloat.resize(10,8.8);
   
  std::cout<<"vFloat has "<<vFloat.size()<<" elements\n"; 

  printVector(vFloat);
  //TODO: Complete the Print function in main.hpp 
  // Call the function here to print out each element of vFloat



  return 0;
}


