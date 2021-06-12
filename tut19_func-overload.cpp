#include <iostream>
#include <string.h>
using namespace std;

int sum(int a, int b){
    cout<<"(Using 2 Arguement): ";
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"(Using 3 Arguement): ";
    return a+b+c;
}

/*Volume of a Cube*/
int volume (int a){
    return(a*a*a);
}
/*Volume of a Cylinder*/
int volume (int r, int h){
    return(3.14*r*r*h);
}
/*Volume of a Rectangular Box*/
int volume (int l, int b, int h){
    return(l*b*h);
}


int main()
{
    /*cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"The sum of 3, 4 and 6 is "<<sum(3,4,6)<<endl;*/

    cout<<"The volume of Cube of side 4 is = "<< volume(4)<<endl; 
    cout<<"The volume of cylinder of radious 3 and height 6 is = "<< volume(3,6)<<endl;
    cout<<"The volume of Rectangular Box of dimension 2, 3, 6 is = "<< volume(2,3,6)<<endl;
    
    return 0;
}