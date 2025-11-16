#include<iostream>
using namespace std;

// "this" keyword is pointer that is pointing to that object that object call member function
// in this example "this" pointer is pointing to 'a' object because 'a' object is call 'setdata()' member function, so simple means "this" keyword points to the 'a' object

class A{
    int a;
    public:
        // void setdata(int a){
        A &setdata(int a){
            this->a=a;
            return *this;
        }
        void getdata(){
            cout<<"The Value Of a is "<<a<<endl;
        }
};
int main(){
    A a;
    a.setdata(10).getdata();
    
}