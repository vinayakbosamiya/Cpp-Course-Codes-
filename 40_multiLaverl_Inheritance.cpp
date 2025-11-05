// MultiLevel Inheritance Example

#include<iostream>
using namespace std;

class student
{
    protected:
        int roll_number;
    public:
        void set_roll_num(int r){
            roll_number = r;
        };
        void get_roll_num(void){
            cout<<"The Roll Number iS "<<roll_number<<endl;
            

        };
    
};

class exam : public student{
    protected:
        float php;
        float js;
    public:
        void set_marks(float m1, float m2){
            php = m1;
            js = m2;
        };
        void get_marks(void){
            cout<<"The Marks Obtained In Php Are "<<php<<endl;
            cout<<"The Marks Obtained In Js Are "<<js<<endl;
        };
         
};

class result : public exam{
    float perc;
    public:
        void display(){
            get_roll_num();
            get_marks();
            cout<<"The Percentage Is "<<(php+js)/2;
        };
};


int main(){
    
    /*
    Notes:
    If We Are Inheriting B from A and C from B: [ A---> B---> C ]
    1. A is The Base Class For B And B is The Base Class For C
    2. A---> B---> C is Called Inheritance Path
    */

result s;
s.set_roll_num(420);
s.set_marks(70,80);
s.display();



    return 0;
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

