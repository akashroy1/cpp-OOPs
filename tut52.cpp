/*  Array of Pointer Objects
*/
#include <iostream>
using namespace std;

class Shop {
    int id;
    float price;
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void getData(void){
            cout<<"Code of this item is "<<id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }
};

int main()
{
    int size = 3;
    // int *ptr = new int[34];
    Shop *ptr = new Shop [size];
    Shop *ptrTemp = ptr;

    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter Id and Price of Item "<<i+1;
        cin>>p>>q;
        (ptr)->setData(p,q);
        ptr++;
    }

    for (int j = 0; j < size; j++)
    {
        cout<<"Item Number: "<<j+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    
    
    
    return 0;
}