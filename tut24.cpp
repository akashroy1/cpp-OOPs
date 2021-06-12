/*Static Variable Declaration and Use*/
#include <iostream>
#include <string.h>
using namespace std;

/*  --------------- ***** Static Data Member ***** -----------------
    If we create a intiger type variable ibside a class that will be separately 
    available for all the objects. 
    For Example - 
    If we create `int count =0;`
    count will be 0 for all the objects.
    But if we want a single variable such that the object will use that but 
    that'll be a class property instead of object property we have to use `static int count`
    If we use that we can use that variable as memory and that can be increamented with every objects
    (Program shown below) 
    Lifetime of static variable is until when the program terminates
*/

/*  --------------------- ***** Static Member Function ******---------------------
    It's used so that this Function can Access all the Static Data Members
    WE DONT NEED ANY OBJECT TO RUN THIS TYPE OF FUNCTION
    Static Member function has permission to access the static Data Member only
    THey can't Access Other Data

*/

class Employee{
    int id;
    // static int count = 1000; --> Syantax error
    static int count;
    public:
        void setData(void){
            cout<<"Enter the id: ";
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"The id of the Employee is: "<<id<<" and the employee number is = "<<count<<endl;
        }
        /* Static Member Function */
        static void getCount(void){
            // cout<<id; --> Eroor, No Permission to access other Data instead of static
            cout<<"The value of count = "<<count<<endl;
        }
};

// int Employee :: count; // --> Default Value is 0

/* If we want to inisilize the static variable from a certain value 
    we have to write it in Declareation part, not in initialization part inside Class
    That will be a Syntax error
*/
int Employee :: count = 1000;

int main()
{
    Employee harry, rohan, lovish;

    harry.setData();
    harry.getData();
    Employee::getCount(); // Using of Static Member Function
    
    rohan.setData();
    rohan.getData();
    Employee::getCount(); // Using of Static Member Function

    lovish.setData();
    lovish.getData();
    Employee::getCount(); // Using of Static Member Function
    
    return 0;
}