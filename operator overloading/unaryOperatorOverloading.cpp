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

        /* PostFix Increment take datatype as argument */
        void operator++(int){
             num++;
            // return num;
        }

        /* PreFix Increment not take anything as argument */
        void operator++(){
            num = ++num;
            // return num;
        }
        /* PreFix decrement  */
        void operator--(){
            num = --num;
        }
        
        /* Prefix decrement */
        void operator -(){
            num = -num;
        }

        /* PostFix decrement  */
        void operator--(int){
             num--;
        }

        void display(){
            cout<<"The Value Of Num: "<<num<<endl;
        }
};

int main(){
    data d(10),result(0);
    // result = ++d;
    // --d;
    // -d;
    // d--;
    // ++d;
    // d++;
    d.display();
    // cout<<result;
}
