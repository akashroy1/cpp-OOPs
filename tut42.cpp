/*  
    --------- Task ----------
    Create 2 Classes
    1. SimpleCalculator - Takes 2 numbers using utility function and performs +, -, *, / 
        and displays result using another utility function
    2. ScientificCalculator - Takes 2 numbers using utility function and perform any 4 
        Scientific Operation of your Choice and displays result using another utility function
    
    Create another class named `HybridCalculator` and inharit it using two Classes:
        Q1. What type of inharitance you are using?
        Q2. Which mode of inharitance you are using?
        Q3. Create an Object of Hybrid Calculator and display the result of Simple and Scientific Calculator?
        Q4. How Code reusability implemented?

*/
#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n)
{
    if (n>1)
    {
        return n * factorial(n-1);
    }
    else
    {
        return 1;
    }
    ;
}

class SimpleCalculator {
    protected:
        int sim_num1, sim_num2;
    public:
        void setSimData(int a, int b);
        void sum();
        void diff();
        void mult();
        void div();
};
void SimpleCalculator :: setSimData(int a, int b){
    sim_num1 = a;
    sim_num2 = b;
}
void SimpleCalculator :: sum(){
    cout<<"The value of num1 + num is = "<<sim_num1+sim_num2<<endl;
}
void SimpleCalculator :: diff(){
    cout<<"The value of num1 - num is = "<<sim_num1-sim_num2<<endl;
}
void SimpleCalculator :: mult(){
    cout<<"The value of num1 x num is = "<<sim_num1*sim_num2<<endl;
}
void SimpleCalculator :: div(){
    cout<<"The value of num1 / num is = "<<float(sim_num1)/float(sim_num2)<<endl;
}


class ScientificCalculator {
    protected:
        int sci_num1, sci_num2;
    public:
        void setSciData(int a, int b);
        void fact();
        void square();
        void inverse();
        void root();
};

void ScientificCalculator :: setSciData (int a, int b){
    sci_num1 = a;
    sci_num2 = b;
}
void ScientificCalculator :: fact (){
    cout<<"The factorial of num1 is = "<<factorial(sci_num1)<<endl;
    cout<<"The factorial of num2 is = "<<factorial(sci_num2)<<endl;
}
void ScientificCalculator :: square (){
    cout<<"The square of num1 is = "<<sci_num1*sci_num1<<endl;
    cout<<"The square of num2 is = "<<sci_num2*sci_num2<<endl;
}
void ScientificCalculator :: inverse (){
    cout<<"The inverse of num1 is = "<<1/float(sci_num1)<<endl;
    cout<<"The inverse of num2 is = "<<1/float(sci_num2)<<endl;
}
void ScientificCalculator :: root (){
    cout<<"The root of num1 is = "<<sqrt(sci_num1)<<endl;
    cout<<"The root of num2 is = "<<sqrt(sci_num2)<<endl;
}

class HybridCalculator : public SimpleCalculator, public ScientificCalculator {
    public:
        void display(){
            cout<<"The Data Members of Simple Calculator is "<<sim_num1<<" and "<<sim_num2<<endl;
            cout<<"The Data Members of Scientific Calculator is "<<sci_num1<<" and "<<sci_num2<<endl;
        }
};

int main()
{
    HybridCalculator akash;
    akash.setSimData(12, 15);
    akash.setSciData(2, 3);
    akash.display();
    akash.sum();
    akash.diff();
    akash.mult();
    akash.div();
    akash.fact();
    akash.square();
    akash.inverse();
    akash.root();
    
    return 0;
}