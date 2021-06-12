#include <iostream>
#include <string.h>
using namespace std;

class Point{
    int x, y;
    public:
        Point(int a, int b);
        void displayPoint();
};

Point :: Point (int a, int b){
    x = a;
    y= b;
}
void Point :: displayPoint(){
    cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
}

int main()
{
    Point p(1,1);
    p.displayPoint();

    Point q(4,6);
    q.displayPoint();
    
    return 0;
}

// Create a function (Hint: Make it a friend function) which takes 2 point objects and computes the distance between those 2 points

/*  Use these examples to check your code:
    Distance between (1, 1) and (1, 1) is 0
    Distance between (0, 1) and (0, 6) is 5
    Distance between (1, 0) and (70, 0) is 69
*/
