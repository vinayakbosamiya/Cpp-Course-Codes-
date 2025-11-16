// #include<iostream>
// using namespace std;

// class base{
//     public:
//     int a;
//     void display(){
//         cout<<"The Base Value Of a: "<<a<<endl;
//     }
// };
// class derived : public base{
//     public:
//     int b;
//     void display(){
//         cout<<"The Base Value from derived class a: "<<a<<endl;
//         cout<<"The Derived Value Of b: "<<b<<endl;
//     }
    
// };
// int main(){
//     base * base_class_pointer;
//     base obj;

//     derived obj_derived;
//     base_class_pointer = &obj_derived; //Pointing Base Class Pointer To Derived Class 
    
//     base_class_pointer->a=31;
//     base_class_pointer->display();
    
//     derived * derived_class_pointer;
    
//     derived_class_pointer = &obj_derived;
//     derived_class_pointer->a=321;

//     derived_class_pointer->b=221;
//     derived_class_pointer->display();


// }


#include<iostream>
using namespace std;
class baseclass{
    public:
        int base;
        void dis(){
            cout<<"this is base class and value of base: "<<base<<endl;
        }
};
class derived:public baseclass{
    public:
        int derived;
        void dis(){
            cout<<"this is base class from derived and value of Base: "<<base<<endl;
            cout<<"this is Derived class and value of Derived: "<<derived<<endl;
        }
};

int main(){
    baseclass obj1;
    derived obj2;

    baseclass * base_pointer;
    derived * derived_pointer;

    base_pointer = &obj2;
    base_pointer->base=10;
    base_pointer->dis();

    derived_pointer = &obj2;
    derived_pointer->base=50;
    derived_pointer->derived=20;
    derived_pointer->dis();


     

}   
