#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int marks[4] = {23,45,56,89};

    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<endl;

    int* p= marks;
    cout<<(p)<<endl;
    // cout<<"The value of marks[0]: "<<*(p)<<endl;
    // cout<<"The value of marks[1]: "<<*(p+1)<<endl;
    // cout<<"The value of marks[2]: "<<*(p+2)<<endl;
    // cout<<"The value of marks[3]: "<<*(p+3)<<endl;
    

    return 0;
}