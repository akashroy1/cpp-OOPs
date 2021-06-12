#include <iostream>
using namespace std;

template <class T>

class vector{
    public:
        T* arr;
        int size;
        vector(T m){
            size = m;
            arr = new T[size];
        }
        T dotProduct(vector &v){
            T d = 0;
            for (int  i = 0; i < size; i++)
            {
                d+=this->arr[i] * v.arr [i];
            }
            return d;
            
        }
};

int main()
{
    vector<double> v1(3);
    v1.arr[0] = 4.5;
    v1.arr[1] = 2.4;
    v1.arr[2] = 1.0;
    vector<double> v2(3);
    v2.arr[0] = 2.0;
    v2.arr[1] = 0.0;
    v2.arr[2] = 1.8;
    double a = v1.dotProduct(v2);
    cout<<a<<endl;
    
    return 0;
}