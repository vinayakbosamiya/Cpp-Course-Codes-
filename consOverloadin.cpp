#include <iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    Complex(int x,int y)
    {
        a = x;
        b = y;
    }   
     Complex(int x)
    {
        a = x;
        b = 0;
    }
    
    Complex()
    {
        a = 0;
        b = 0;
    }

    void prn()
    {
        cout<<"your number is "<<a<< " + "<<b<<" i "<<endl;
    }

};

int main(){
    Complex c1(11,22);
    c1.prn();
    Complex c2(11);
    c2.prn();
    Complex c3;
    c3.prn();
    
    return 0;
}