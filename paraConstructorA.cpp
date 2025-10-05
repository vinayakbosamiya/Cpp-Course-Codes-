// example of parameterized constructor
#include <iostream>
using namespace std;
class complex{
    public:
    int a,b;
    public:

    complex(int , int); //constructor
    void printnum()
    {
        cout<<"The complex number is "<<a<<" + "<<b<<" i"<<endl;
    }
};
complex :: complex(int x , int y) // pass the parameters to the constructor
{
    a = x;
    b = y;
 
 
}
int main(){
        complex c1(10,20);
        complex b = complex(100,200);
       
        c1.printnum();
        b.printnum();
    return 0;
}