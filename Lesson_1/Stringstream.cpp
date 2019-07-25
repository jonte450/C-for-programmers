/*Goal: practice using stringstream
/*Goal: practice getting string inputs and 
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room. 
 **Then prompt for the width of the room.
 **Print out the area of the room. 
 */
 
 #include "iostream"
 #include "string"
 #include "sstream"
 
 using namespace std;
 
 int main(){
    string get_input= "";
    float length = 0;
    float width = 0; 
    float area = 0;
    
    cout<<"What's the length of the room?\n";
    getline(cin,get_input);
    stringstream(get_input) >> length;
    
    cout<<"What's the whidth of the room?\n";
    getline(cin,get_input);
    stringstream(get_input) >> width;
    
    area = length*width;
    cout<<"The area of the room is: "<<area;
    
    
    

    return 0; 
 }

 
