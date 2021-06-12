#include <iostream>
#include <string.h>
using namespace std;

/**/
void swap (int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

/**/
void swapPointer(int*a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**/
// void swapReferenceVar(int &a, int &b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

/**/
int & swapReferenceVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;

    return a;
}

int main()
{
    int num1, num2;
    cout<<"Enter first Number:";
    cin>>num1;
    cout<<"Enter second Number:";
    cin>>num2;

    cout<<"---After Swapping without Pointer---"<<endl;
    swap(num1, num2);
    cout<<"First Number: "<<num1<<endl;
    cout<<"Second Number: "<<num2<<endl;

    cout<<"---After Swapping with Pointer---"<<endl;
    swapPointer(&num1, &num2);
    cout<<"First Number: "<<num1<<endl;
    cout<<"Second Number: "<<num2<<endl;
    
    cout<<"---After Swapping with Reference Variable---"<<endl;
    swapReferenceVar(num1, num2)=50;
    cout<<"First Number: "<<num1<<endl;
    cout<<"Second Number: "<<num2<<endl;

    return 0;
}