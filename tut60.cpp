/*  File I/O

    Useful Classes for working with files in C++ are:
        1. fstreambase
        2. ifstream --> Derived from fstreambase
        3. ofstream --> Derived from fstreambase

    In order to work with files in C++, you will have to open it. 
    Primarily there 2 ways to open a file:
        1. Using constructor 
        2. Using the member function open() of the class
*/
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
    string st = "Akash Roy";
    // Opening file with constructor and writting to it.
    // ofstream out("tut60-sampleFile.txt"); // Write operation
    // out<<st;
    
    // Opening file with constructor and Reading it.
    string st2;
    ifstream in("tut60-sampleFile.txt");
    // in>>st2;
    getline(in, st2);
    cout<<st2<<endl;

    return 0;
}