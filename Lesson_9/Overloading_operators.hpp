#include <iostream>
 
using namespace std;

//TODO: Add all necessary functions and 
//Overload the '+' sign 
//To achieve the required total

class Shape 
{
    private:
      int length;     // Length of a box
      int width;
      
    public:
      // Constructor definition
      Shape(int l = 2, int w = 2) 
      {
         length = l;
         width = w;
      }
      int getLength(){
          return length;
      }
      
      int getWidth(){
          return width;
      }
      
      void setWidth(int in_width){
           width =in_width;
      }
      
     void setLength(int in_length){
           length =in_length;
      }
	  
      double Area() 
      {
         return length * width;
      }
      
      int operator +(Shape shapein){
        return (length + shapein.getLength())*(width + shapein.getWidth());  
      }
		
};

