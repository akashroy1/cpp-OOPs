#include <iostream>
// #include <string.h>
#include <string>
using namespace std;

int main()
{
    /*
    float d = 34.4F;
    long double e = 43.5L;
    cout<<"The size of 34.4 is "<< sizeof(34.4)<<endl;  //Double
    cout<<"The size of 34.4f is "<< sizeof(34.4f)<<endl; // Float
    cout<<"The size of 34.4F is "<< sizeof(34.4F)<<endl; // Float
    cout<<"The size of 34.4l is "<< sizeof(34.4l)<<endl; //Long Double
    cout<<"The size of 34.4L is "<< sizeof(34.4L)<<endl; //Long Double
    */


   /*     Reference Variable     */

       float x = 23;
       float &y =x;

       cout<<x<<endl;
       cout<<y<<endl;

    int a = 45;   
    float b = 45.46;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;

    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    int c = int(b);
    cout<<"The c is "<< c <<endl;

    cout<<"The expression is "<<a + b<<endl;
    cout<<"The expression is "<<a + int(b)<<endl;
    cout<<"The expression is "<<a + (int)b<<endl;


    
    return 0;
}