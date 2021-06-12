#include <iostream>
#include <string>
using namespace std;
/*
CLASS TEMPLETE WITH MULTIPLE PARAMETERS (ONE, TWO, MORE THAN TWO)
template <class T1, class T2, ......(COMMA SEPARETED)>
class nameOfClass{
    // Body
}
*/
template <class T1, class T2>
class myClass{
    public:
        T1 data1;
        T2 data2;

        myClass(T1 a, T2 b){
            data1 = a;
            data2 = b;
        }

        void display(){
            cout<<this->data1<<endl<<this->data2<<endl;
        }
};

int main()
{
    // myClass<int, char> obj1(1, 'A');
    // myClass<int, float> obj1(1, 8.42);
    myClass<int, string> obj1(1, "Akash");
    obj1.display();
    
    int main = 12;
    cout<<main<<endl;
    
    return 0;
}