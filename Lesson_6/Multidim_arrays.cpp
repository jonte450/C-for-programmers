/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array 
**and a vector of size 4. 
**Use the dot product to multiply the array by the vector. 
**Print the resulting vector. 
*/

#include<iostream>

using namespace std;

int main()
{
    const int row = 4;
    const int col = 4;
    int matrix[row][col];
    int vector[4];
    int product[4];
    int sum = 0;
    
    for(int c_row = 0; c_row < row; c_row++){
        for(int c_col = 0; c_col<col; c_col++){
            cout<<"matrix"<<"["<<c_row<<"]"<<"["<<c_col<<"]"<<".\n";
            cin >> matrix[c_row][c_col];
        }
    }
    
    for(int v = 0; v < row; v++){
        cout<<"vector"<<"["<<v<<"]"<<".\n";
        cin>>vector[v];
    }
    
    for(int cal_row = 0; cal_row < row;cal_row++){
        sum = 0;
    for(int cal_col= 0; cal_col< col; cal_col++){
        sum = (matrix[cal_row][cal_col]*vector[cal_col]) + sum;

    }
    product[cal_row] = sum;
    }
    
    for(int cal = 0; cal<row;cal++){
    cout<<"product["<<cal<<"] = "<<product[cal]<<"\n";
    }    
    
    return 0;
}
