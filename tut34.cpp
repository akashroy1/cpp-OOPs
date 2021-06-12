/*  Copy Constructor in C++
    It makes copy of other Object . Here we have made 

    Copy Constructor is a Constructor that takes a object as an arguement 
    Generally it used to copy an object

    NOTE: 
        If we make our own constructor then it'll use that otherwise if we try to use that without making
        compiler will allocate it's own default Copy Constructor. [No Error Will be thrown]

    If we declare a Copy constructor by `=` sign then 
    it'll call the created Copy Consstructor only if it is deckared in one line (Expained later)
    Otherwise it'll use the default constructor

*/
#include <iostream>
using namespace std;

class Number{
    int a;
    public:
        Number(){ a = 0;}
        Number(int num);
        
        // When Compiler can't find any Copy Constructor then it'll supplies it own default Copy Constructor
        
        Number(Number &obj){
            cout<<"Copy Constructor Called"<<endl;
            a = obj.a;
        }
        
        void display(){
            cout<<"The Number is "<<a<<endl;
        }
};

Number :: Number(int num){
    a= num;
}

int main()
{
    Number x, y, z(45);
    x.display();
    y.display();
    z.display();
    
    Number z1(z); // Copy Constructor invoked
    z1.display();

    Number z2;
    z2 = z; // Default Copy Constructor will be Called. Created one will not be called

    Number z3 = z; // Created Copy Constructor will be Called if this will be declared this way (in 1 line)
    z3.display();

    return 0;
}