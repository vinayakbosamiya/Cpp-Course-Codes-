/*
Unary Operator Overloading
Note :- 
1. Unary Operator Means Operator with only One Operands

*/
#include<iostream>
using namespace std;

class data{
    public:
        int num;
        data(int n){
            num = n;
        }
        /*
            data operator++(){
                num = 1 + num;
                // return num;
            }
        */

        // /*
         data operator+(data t2){
            /*
                data t3(0);
                t3.num = num + t2.num;
                return t3;
            */ 
            num = num + t2.num;
            return num;
         }
        // */

        void display(){
            cout<<"value = "<<num;
        }
};

int main(){
    data t(20),t2(30),res(0);
    // /* 
    res = t+t2; // t.operator+(t2)
     res.display();

    // */
     
    /* 
    ++t;
    t.display();
    */
    
  
} 