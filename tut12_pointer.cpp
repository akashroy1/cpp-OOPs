#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int a =3;
    int *b = &a;

    cout<<"The value of  a "<<a<<endl;
    cout<<"The value of &a "<<&a<<endl;
    cout<<"The value of  b "<<b<<endl;
    cout<<"The value of *b "<<*b<<endl;
    cout<<"The value of &b "<<&b<<endl;
    cout<<endl;

    int **c = &b;

    cout<<"The value of  &b "<<&b<<endl;
    cout<<"The value of  &c "<<&c<<endl;
    cout<<"The value of   c "<<c<<endl;
    cout<<"The value of  *c "<<*c<<endl;
    cout<<"The value of **c "<<**c<<endl;
    cout<<endl;

    int ***d = &c;
    cout<<"The value of   &c "<<&c<<endl;
    cout<<"The value of   &d "<<d<<endl;
    cout<<"The value of    d "<<d<<endl;
    cout<<"The value of   *d "<<*d<<endl;
    cout<<"The value of  **d "<<**d<<endl;
    cout<<"The value of ***d "<<***d<<endl;
    
    return 0;
}