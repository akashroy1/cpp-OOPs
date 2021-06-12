/*  Create a function (Hint: Make it a friend function) which takes 2 point objects
    and computes the distance between those 2 points 
*/

/*  Test Case:
    Distance between (1, 1) and (1, 1) is 0
    Distance between (0, 1) and (0, 6) is 5
    Distance between (1, 0) and (70, 0) is 69
*/

#include <iostream>
#include <cmath>
using namespace std;

class Point{
    private:
        int x, y;
    public:
        Point(int a, int b);
        void displayPoint();
        friend float distance(Point p, Point q);
};

Point :: Point (int a, int b){
    x = a;
    y = b;
}

void Point :: displayPoint(){
    cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
}

float distance(Point p, Point q){
    int hdist =  q.x-p.x;
    int vdist = q.y-p.y;
    float dist = sqrt((pow(hdist, 2)+pow(vdist, 2)));

    return dist;
}

int main()
{
    int x, y;
    cout<<"Enter x and y co-ordinate of Point 1: ";
    cin>>x>>y;
    Point c(x,y);

    cout<<"Enter x and y co-ordinate of Point 2: ";
    cin>>x>>y;
    Point d(x,y);
    c.displayPoint();
    d.displayPoint();

    cout<<"The distance between two points is = "<<distance(c, d)<<" unit"<<endl;

    return 0;
}