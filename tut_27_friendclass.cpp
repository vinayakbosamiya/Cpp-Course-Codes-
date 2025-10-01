#include <iostream>
using namespace std;
class complex;
class calculator{
    public:
    int add(int a, int b)
    {
        return (a+b);
    }
    int sumComplex(complex,complex);
    int sumcomComplex(complex,complex);
     
};

class complex{
    int a,b;
    // friend the function of individual class
    // friend int calculator :: sumComplex(complex,complex);
    // friend int calculator :: sumcomComplex(complex,complex);
    
    // full class friend
    friend class calculator ;
    
    public:
     void setNum(int n1,int n2)
     {
        a = n1;
        b = n2;
     }
     void printnum(){
         cout<<"your number is "<<a<<" + "<<b<<" i "<<endl;
     }
};

 int calculator :: sumComplex(complex o1,complex o2)
    {
        return (o1.a + o2.a);
    }
    int calculator :: sumcomComplex(complex o1,complex o2)
    {
        return (o1.b + o2.b);
    }

 typedef complex cmx;

int main(){
  
    complex o1,o2;
    o1.setNum(2,4);
    o2.setNum(3,5);
    calculator calc;
    int res = calc.sumComplex(o1,o2);
    int res1 = calc.sumcomComplex(o1,o2);
    cout<<"the sum of complex numbers is "<<res<<endl;
    cout<<"the sum of complex numbers is "<<res1<<endl;


    return 0;

}