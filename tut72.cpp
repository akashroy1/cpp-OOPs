/*  List  */
#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lt){
    list<int> :: iterator it;
    for (it = lt.begin(); it != lt.end(); it++)
    {
        cout<<*it<<" | ";
    }
    cout<<endl;
}

int main()
{
    list<int> list1; // List of Zero Length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    display(list1);
    // list1.pop_back();
    // list1.pop_back();
    // list1.pop_front();
    // display(list1);
    // list1.remove(1);
    list1.sort();
    display(list1);

    /*list<int> :: iterator iter;
    iter = list1.begin();
    cout<<*iter<<" ";
    iter++;
    cout<<*iter<<endl;*/

    list<int> list2(3); // Empty List of size 3
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    display(list2);
    list2.remove(6);
    display(list2);

    // Merging of list
    list1.merge(list2);
    list1.sort();
    cout<<"List After Merging"<<endl;
    display(list1);

    // Reverese of list
    cout<<"Reverse of List"<<endl;
    list1.reverse();
    display(list1);

    return 0;
}