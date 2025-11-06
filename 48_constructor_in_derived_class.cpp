// 46 file have only constructor in derived class explaination available 

/*
for a protected members:
_________________________________________________________________________________________________
|    Members         ||    Public Derived    |     Private Derived      |    Protected Derived    |
|--------------------||--------------------- |--------------------------|-------------------------|
|1.Private Members   ||     Not Inherited    |       Not Inherited      |      Not Inherited      |
|2.Protected Members ||       Protected      |          Private         |        Protected        |     
|3.Public Members    ||        Public        |          Private         |        Protected        |  
--------------------------------------------------------------------------------------------------

*/
/*
case 1:
class B : public A{
// order of execution of constructor -> first A() then B()
};

case 2 :
class C: public B, public A{
// Order Of Execution of Constructor -> first B() then A() then C()
};

case 3:
class A: public B, virtual public C{
// Order Of Execution of Constructor -> first C() then B() then A()
};
*/

// 
#include <iostream>
using namespace std;

class base1{
int data1;
public:
    base1(int a){
        data1 = a;
        cout<<"base1 class constructor called"<<endl;
    }
    void printdatabase1(void){
        cout<<"the value of data is "<<data1<<endl;
    }
};

class base2{
int data2;
public:
    base2(int a){
        data2 = a;
        cout<<"base2 class constructor called"<<endl;
    }
    void printdatabase2(void){
        cout<<"the value of data is "<<data2<<endl;
    }
};

class derived : public base1, public base2{
int derived1,derived2;
public:
    derived(int a,int b,int c,int d): base1(a),base2(b){ //send value to base1 and base2 constructor from derived constructor
        derived1 = c;
        derived2 = d;
        cout<<"derived class constructor called"<<endl;
    }
     void printdataderived(void){
        cout<<"the value of derived data is "<<derived1<<endl;
        cout<<"the value of derived data is "<<derived2<<endl;
    }
};
int main()
{
    derived d(1,2,3,4);
    d.printdatabase1();
    d.printdatabase2();
    d.printdataderived();
    return 0;
}