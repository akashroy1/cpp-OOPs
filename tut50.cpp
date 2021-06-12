/*  new and delete keywords in C++ 
    
    New Keyword
    Dynamically new variable.
*/
#include <iostream>
using namespace std;

// class {};

int main()
{
    //Basic Example
    int a =4;
    int* ptr = &a;
    cout<<"The value of a is = "<<*(ptr)<<endl;

    // New Operator
    float *p = new float (40.78);
    cout<<"The value at address p is "<<*(p)<<endl;

    int* arr = new int[3];
    arr[0] = 10;
    // arr[1] = 20; --> or,
    *(arr+1) = 20;
    arr[2] = 12;
    // delete Operator
    // delete[] arr; 

    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;



    return 0;
}