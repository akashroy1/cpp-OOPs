/*  For a Protected Member:
                    Public Derivation       Private Derivation      Protected Derivation
    1. Private      
        Members        Not Inharited           Not Inharited            Not Inharited

    2. Protected
        Members         Protected               Private                 Protected

    3. Public
        Members         Public                  Private                 Protected
*/

#include <iostream>
using namespace std;

class Base{
    private:
        int b;
    protected:
        int a; 
};

class Derived :  Base{

};

int main()
{
    Base b;
    Derived d;

    // cout<<d.a<<endl<<b.a<<endl; // Error Because a is protected in both Base and Derived
    
    return 0;
}
