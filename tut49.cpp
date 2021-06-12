/*  Inisialization List
Syntax for Inisalization list in Constructor:
Constructor (arguement-list) : inisialization-section
{
    assignment + other code
}

class Test {
    int a;
    int b;
    public:
        Test(int i, int j) : a(i), b(i) {Constructor Body}
};

*/
#include <iostream>
using namespace std;

class Test {
    int a;
    int b;
    public:
        // Test(int i, int j) : a(i), b(j)
        // Test(int i, int j) : a(i), b(i+j)
        // Test(int i, int j) : a(i), b(a+i+j) {
        // Test(int i, int j) : b(j), a(i+b) { // --> a have garbage value as a is inisialized first
        Test(int i, int j) : a(i) {
            b = j;
            cout<<"Hello"<<endl;
            cout<<"Hello "<<a<<endl;
            cout<<"Hello "<<b<<endl;

        }
};

int main()
{
    Test t(2,3);
    
    return 0;
}