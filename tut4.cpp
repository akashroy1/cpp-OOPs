#include <iostream>
// #include "header.h"
// #include "tut3.cpp"
using namespace std;

int global = 15;

int main(){

    int global =12;

    cout<<"The local global is: "<<global<<endl; 
    cout<<"The global global is: "<<::global<<endl; 

    return 0;
}