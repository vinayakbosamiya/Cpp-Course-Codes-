#include <iostream>
using namespace std;

class complex{
    int real,imaginary;
    public:
        void getData(){
            cout<<"the value of real is "<<real<<endl;
            cout<<"the value of imaginary is "<<imaginary<<endl;
        }
        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
};

int main(){
    // complex c;
    // c.setData(10,20);
    // c.getData();
    
    // // // pointer to object 
    // complex *ptr = &c;
    // (*ptr).setData(10,20);
    // (*ptr).getData();

    // complex *ptr2 = new complex;
    // // (*ptr2).setData(10,20); // is exactly same as 
    // ptr2->setData(10,20);
    // // (*ptr2).getData(); // is exactly same as 
    // ptr2->getData();

    // // // array of pointer
    complex *ptr3 = new complex[2];
    ptr3->setData(1,2);
    ptr3->getData();



   
}