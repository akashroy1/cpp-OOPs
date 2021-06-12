#include <iostream>
#include <string.h>
using namespace std;

class binery
{
    string str;

public:
    void read(void);
    void ch_bin(void);
    void ones_complement(void);
    void display(void);
};

void binery :: read(void)
{
    cout<<"Enter a binery number: ";
    cin>>str;
}

void binery :: ch_bin(void)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i)!='0' && str.at(i)!='1')  
        {
            cout<<"Incorrect Binery format"<<endl;
            exit(0);
        }
    }
    cout<<"It is a Binery Number"<<endl;
}

void binery :: ones_complement(void)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i)=='0')
        {
            str.at(i)='1';
        }
        else 
        {
            str.at(i)='0';
        }    
    }
}

void binery :: display(void)
{
    cout<<"Displaying Your Binery Number ";
    for (int i = 0; i < str.length(); i++)
    {
        cout<<str.at(i);
    }
    cout<<endl;
}

int main()
{
    binery b;
    b.read();
    b.ch_bin();
    b.display();
    b.ones_complement();
    b.display();

    return 0;
}