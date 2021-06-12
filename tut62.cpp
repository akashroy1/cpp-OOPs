#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
    ofstream out;
    out.open("tut60-sampleFile.txt");
    out<<"Hi!! Folks, this is Akash\n";
    out<<"This is me\n";
    out<<"This is also me\n";
    out.close();

    ifstream in;
    string st, st2;
    in.open("tut60-sampleFile.txt");
    in>>st>>st2;
    cout<<st<<st2;
    while (in.eof() == 0)
    {
        getline(in, st);
        cout<<st<<endl;
    }
    
    in.close();
    
    return 0;
}