/*  Friend Class and Member Friend Function 
    Member friend function
        If we want o access any Private data of a class by a member function of 
        another function so we can define that member function as a friend function
        i.e - friend int Calculator ::sumRealComplex(complex o1, complex o2); 

    friend Class
        If we create many such function we can define the whole class as friend instead of declaring many time
        i.e -  friend class Calculator
*/
#include <iostream>
#include <string.h>
using namespace std;

class complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumRealComplex(complex, complex);
    int sumImgComplex(complex, complex);
};

class complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    /* // Individually Declareing Funcrions as friend
    friend int Calculator ::sumRealComplex(complex o1, complex o2);
    friend int Calculator ::sumImgComplex(complex o1, complex o2); */

    // Aliter: Declareing the Entire Class as friend
    friend class Calculator;


    void printNumber()
    {
        cout << "Your Complex Number is: " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int Calculator :: sumImgComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}


int main()
{
    complex c1;
    complex c2;

    c1.setNumber(1, 4);
    c2.setNumber(5, 7);
    Calculator calc;
    int resR = calc.sumRealComplex(c1, c2);
    int resC = calc.sumImgComplex(c1, c2);
    cout << "The sum of real part of o1 & o2 is " << resR << " and sum of Complex part is "<<resC<<endl;

    return 0;
}