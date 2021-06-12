#include <iostream>
using namespace std;

template <class T>
class Harry{
    public:
        T data;
        Harry (T a){
            data =a;
        }
        void display();
};

template <class T>
void Harry <T> :: display(){
    cout<<data<<endl;
}

void func(int a){
    cout<<"I am first func()"<<a<<endl;
}

template <class T>
void func1(T a){
    cout<<"I am Tempalteized func()"<<a<<endl;
}

int main()
{
    Harry <float> h(12.44);
    h.display();

    // func(4); // Exact Match takes the highest priority
    func1(4);
    
    return 0;
}