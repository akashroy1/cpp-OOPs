#include <iostream>
#include <string.h>
using namespace std;

/*  For Simple Operation we make Inline Function
    This Function it replace function call by statement in cmpile time
    Not Recomended for big operation function like- Recursion
     */
inline int product(int a, int b){
    return a*b;
}

inline int product2(int a, int b){

    /*  The function forgets all the value after execution 
        But, only static value of function retained */
    static int c=0; // This executes only one time (First Run)
    c=c+1; // Next time when it'll run the value of C will be retained and will increment

    /*--************Don't Use Static Variable in Inline Functins**************-- */
    return a*b+c;
}

/*Default Statement in Function*/
float moneyReceived(int currentMoney, float factor=1.08){
    /*  In function declaration default arguement 
        all default arguement must be at right side (last)
        and compalsory arguement must be at the extreme left(first)*/
    return currentMoney*factor;
}

int strlength(const char *p){
    // If you do't want to change the parameter in Function
    // Here character *p 
}

int main()
{
    int num1=5, num2=4;
    // cout<<"Enter the value of a & b "<<endl;
    // cin>>num1>>num2;
    
    // cout<<"Product of num1 and num2 is = "<<product(num1,num2)<<endl;
    // cout<<"Product of num1 and num2 is = "<<product(num1,num2)<<endl;
    // cout<<"Product of num1 and num2 is = "<<product(num1,num2)<<endl;


    // cout<<"Product of num1 and num2 is = "<<product2(num1,num2)<<endl;
    // cout<<"Product of num1 and num2 is = "<<product2(num1,num2)<<endl;
    // cout<<"Product of num1 and num2 is = "<<product2(num1,num2)<<endl;
    
    int money =100000;
    cout<<"If you have "<<money<< " in your account you'll get "<<moneyReceived(money)<<" after one year."<<endl;
    cout<<"If you have "<<money<< " in your  VIP account you'll get "<<moneyReceived(money, 1.1)<<" after one year."<<endl;

    
    return 0;
}