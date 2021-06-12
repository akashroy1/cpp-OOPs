/*  Map 
    Map is an Assosiative Array
*/
#include <iostream>
#include <map>
#include <string>
using namespace std; 

int main()
{
    map<string, int> marksMap;
    marksMap["Harry"] = 98;
    marksMap["Jack"] = 59;
    marksMap["Rohan"] = 2;
    
    marksMap.insert({{"Akash", 90}, {"Sagar", 95}});

    map<string, int> :: iterator iter;
    for(iter = marksMap.begin(); iter!=marksMap.end(); iter++){
        cout<<(*iter).first<<" -> "<<(*iter).second<<endl;
    }

    cout<<"The size is: "<<marksMap.size()<<endl;
    cout<<"The Max Size is: "<<marksMap.max_size()<<endl;
    cout<<"The return value of empty is: "<<marksMap.empty()<<endl;
    return 0;
}