/*  Template
    For Object template is class 
    for class template is Template

    Why template?
        DRY principle (Do Not Repeat)
        Generic Programming 

    Templates are also called parameterized class
*/
#include <iostream>
using namespace std;

template <class T>
class vector{
    T* arr; // T can be int, float, double, char etc.
    public:
        vector(T* arr){
            //Code here
        }

};
int main()
{
    int* ptrI;
    cin>>*ptrI;
    float* ptrF;
    cin>>*ptrF;
    vector <int> myIntVec(ptrI);
    vector <float> myFloatVec(ptrF);
    
    return 0;
}