//1. THIS IS THE EXAMPLE OF SINGLE Inheritance

#include<iostream>
using namespace std;

class base{
int d1;
public:
    int d2;
    setData(void){
        d1 = 10;
        d2 = 20;
    };
    int getData1(){
        return d1;
    };
    int getData2();
};
int base :: getData2(){
    return d2;
};

class Derived : public base
{
    int data3;
    public:
        void process(){
            data3  = d2 * getData1(); 
        };
        void display(){
            cout<<"value of data 1 is "<<getData1()<<endl;
            cout<<"value of data 1 is "<<d2<<endl;
            cout<<"value of data 1 is "<<data3<<endl;
        };
}; 




int main(){
    Derived d1;
d1.setData();
d1.process();
d1.display();

// base d2;
// d2.setData();
// d2.process();
// d2.display();
}