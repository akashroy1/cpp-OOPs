/*  Function Objects(Functor): 
        Function Wrapped in a class so that it available like an object
*/
#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1, 73, 4, 12, 77, 54};
    sort(arr, arr+5);
    sort(arr, arr+6, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" | ";
    }
    
    return 0;
}