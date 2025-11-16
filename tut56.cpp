#include<iostream>
using namespace std;
class base{
    public:
    int a=10;
    virtual void display(){
        cout<<"1 The Base Value Of a: "<<a<<endl;
    }
};
class derived : public base{
    public:
    int b=20;
    void display(){
        cout<<"2 The Base Value from derived class a: "<<a<<endl;
        cout<<"2 The Derived Value Of b: "<<b<<endl;
    }
    
};

int main(){
    base * base_class_pointer;
    base obj;
    derived obj_derived;

    base_class_pointer = &obj_derived;
    // base_class_pointer->a=10;
    base_class_pointer->display();
}