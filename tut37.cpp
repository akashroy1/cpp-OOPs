/*  Inheritance Syntax and visibility mode
*/

#include <iostream>
using namespace std;

class Employee{ // ----> Base Class
    public:
        int id;
        float salary;   
        Employee(int inpId){
            id = inpId;
            salary = 34;
        }
        Employee(){}
};

// Derived Class Syntax
/*  class {{derived-class-name}} : {{Visibility Mode}} {{base-class-name}}
    {
        class members/methods/etc..
    }
NOTE: 
    1. Defaut visibility mode is private
    2. Public visibility Mode: Public members of the base class becomes Public members of the derived class 
    3. Private visibility Mode: Public members of the base class becomes Private members of the derived class 
    4. Private members are never inharited
*/

// Creating a `Programmer` class derived from Employee Base Class
class Programmer : public Employee{
    public:
        Programmer(int inpId){
            id = inpId;
        }
        int languageCode= 9;

};

int main()
{
    Employee harry(1), rohan(1);

    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;

    Programmer skillF(1);
    cout<<skillF.languageCode<<endl;
    cout<<skillF.id<<endl;
    cout<<skillF.salary<<endl;

    return 0;
}