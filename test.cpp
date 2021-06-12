#include <iostream>
#include <string.h>
using namespace std;

// Why we can't do this Line- 38 -42

// Why we have to declare the friend member function's class before the main class

class Calculator;

class complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    friend int Calculator ::sumRealComplex(complex o1, complex o2);

    void printNumber()
    {
        cout << "Your Complex Number is: " << a << " + " << b << "i" << endl;
    }
};

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumRealComplex(complex o1, complex o2);
};

int Calculator ::sumRealComplex(complex o1, complex o2)
{
    // cout << o1.a << " " << o1.b << endl; // -> Error Code
    // cout << o2.a << " " << o2.b << endl; // -> Error Code
}

int main()
{

    return 0;
}