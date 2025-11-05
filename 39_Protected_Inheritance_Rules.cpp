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

#include<iostream>
using namespace std;
class base{
    protected:
    int a;
    private:
    int b;
};

class derived : protected base{
    
};
int main(){
    base b;
    derived d;
        cout<<d.a;
        return 0;
}