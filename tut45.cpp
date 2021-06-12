/*  Virtual Base Class
    If we create 2 class by inhariting from one class and again
    create one single derived class by that 2 classes - Ambiguity will come
    That's why we use Virtual Base Class to resolve this.
*/
#include <iostream>
using namespace std;

/*
Inharitances:
    Student --> Test
    Student --> Sport
    Test --> Result
    Sport --> Result
*/

class Student{
    protected:
        int roll_no;
    public:
        void setNumber(int a){
            roll_no = a;
        }
        void printNumber(void){
            cout<<"Your Roll No. is "<<roll_no<<endl;
        }
};

class Test : virtual public Student{
    protected:
        float math, physics;
    public:
        void setMarks(float m1, float m2){
            math = m1;
            physics = m2;
        }
        void printMarks(){
            cout<<"Your Math marks is "<<math<<endl;
            cout<<"Your Physics marks is "<<physics<<endl;
        }
};
class Sport : virtual public Student {
    protected:
        float score;
    public:
        void setScore(float s){
            score = s;
        }
        void printScore(void){
            cout<<"Your Score of Sports is "<<score<<endl;
        }
};

class Result : public Test, public Sport {
    private:
        float total;
    public:
        void display(void){
            total = math + physics + score;
            printNumber();
            printMarks();
            printScore();
            cout<<"Your Total Score is = "<<total<<endl;
        }
};

int main()
{
    Result r;
    r.setNumber(88);
    r.setMarks(85, 92);
    r.setScore(85);
    r.display();
    
    return 0;
}