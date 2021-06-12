/*  Multilevel Inheritance
    Notes:
        If we are Inhariting B from A and C from B: [A--> B--> C]
        1. A is the Base Class of B and B is the Base Class for C
        2. ABC is Called inharitance Path
*/
#include <iostream>
using namespace std;

class Student {
    protected:
        int roll_no;
    public:
        void setNumber(int);
        void getNumber(void);
};

void Student ::setNumber(int r){
    roll_no = r;
}

void Student ::getNumber(){
    cout<<"The roll Number is "<<roll_no<<endl;
}

class Exam : public Student {
    protected:
        float maths;
        float physics;
    public:
        void setMarks(float, float);
        void getMarks(void);
};

void Exam :: setMarks (float m1, float m2) {
    maths = m1;
    physics = m2;
}

void Exam :: getMarks () {
    cout<<"The marks obtain in Maths is "<<maths<<endl;
    cout<<"The marks obtain in Physics is "<<physics<<endl;
}


class Result : public Exam {
    float percentage;
    public:
        void display(){
            getNumber();
            getMarks();
            cout<<"Your Percentage is "<<(maths+physics)/2<<"%"<<endl;
        }

};

int main()
{
    Result harry;
    harry.setNumber(4);
    harry.setMarks(90, 94);
    harry.display();
    
    return 0;
}