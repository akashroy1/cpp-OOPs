#include <iostream>
#include <vector>
using namespace std;

/*void display (vector<int> &v){
    cout<<"The Vector is -> | ";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" | ";
    }
    cout<<endl;
}*/

template <class T>
void display (vector<T> &v){
    cout<<"The Vector is -> | ";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" | ";
    }
    cout<<endl;
}

int main()
{
    /*
    vector<int> vec1;
    int element, size;

    cout<<"Enter the length of the Vector ";
    cin>>size;
    
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter element"<<i+1<<" to add to this vector ";
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);
    vec1.pop_back();
    display(vec1);
    vector<int>:: iterator iter = vec1.begin();
    // vec1.insert(iter+1, 12);
    // vec1.insert(iter, 2, 28);
    display(vec1);

    // Get Element from a Position
    cout<<vec1.at(2)<<endl;
    */


    /*  Ways to Create Vector */

    vector<int> vec1; // Zero length vector
    vector<int> vec2(4); // 4 length vector
    vector<char> vec3(4); // 4 length Character vector
    vector<char> vec4(vec3); // 4 length Character vector from vector3
    vector<int> vec5(6, 3); // 6-Element vector of 3s

    // display(vec1);
    vec2.push_back(5);
    // display(vec2);
    // display(vec3);
    vec3.push_back('A');
    display(vec3);
    display(vec4);
    // display(vec5);
    cout<<vec4.size()<<endl;

    return 0;
}