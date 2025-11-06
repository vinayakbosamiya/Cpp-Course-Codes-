#include<iostream>
using namespace std;

class base1{
    protected:
     int b1;
    public:
        void set_base1(int a){
            b1 = a;
        }
};

class base2{
    protected:
     int b2;
    public:
        void set_base2(int a){
            b2 = a;
        }
};

class derived : public base1, public base2
{
    public: 
        void show(){
            cout<<"the value of base 1 is "<<b1<<endl;
            cout<<"the value of base 2 is "<<b2<<endl;
            cout<<"the sum of both base class is "<<b1 + b2<<endl;
        }
};

int main(){
    derived d1;
    d1.set_base1(10);
    d1.set_base2(20);
    d1.show();
}
/*
Note:

1. inheritance rules 
2. for a protected members:
_________________________________________________________________________________________________
|    Members         ||    Public Derived    |     Private Derived      |    Protected Derived    |
|--------------------||--------------------- |--------------------------|-------------------------|
|1.Private Members   ||     Not Inherited    |       Not Inherited      |      Not Inherited      |
|2.Protected Members ||       Protected      |          Private         |        Protected        |     
|3.Public Members    ||        Public        |          Private         |        Protected        |  
--------------------------------------------------------------------------------------------------

*/

