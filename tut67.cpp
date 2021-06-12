/*
Function Template
*/
#include <iostream>
using namespace std;

template <class T1, class T2>
float funcAvg(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

template <class T>
void swapp(T &x, T &y){
    T temp = x;
    x = y;
    y= temp;
}

int main()
{
    float a = funcAvg(5,2.4);
    cout<<"The Avarage is "<<a<<endl;

    int x = 5, y = 6;
    cout<<"Before "<<x<<"  "<<y<<endl;
    swapp(x, y);
    cout<<"After "<<x<<"  "<<y<<endl;
    
    return 0;
}