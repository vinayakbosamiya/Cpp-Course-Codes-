// 44 file available only virtual base class understanding
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

/*
student --> test
student --> sports
test --> result
sports --> result

*/

class student{
    protected:
        int roll_no;
    public:
        void set_number(int a)
        {
            roll_no = a; 
        }
        void print_number(void)
        {
            cout<<"The roll number of the student is "<<roll_no<<endl;
        }
};
/* below show 2 classes test and result that inherited from student class using virtual keyword,
virtual base class means test and sports both are inheriting from student class using virtual keyword, so that result class inherited test and sports with student class, it means contains 2 copies have result of student class,
but using virtual keyword create one copy of student class or student class members in result class. so that we can avoid ambiguity in result class.

ambiguity means we have 2 same copies we are use one one copy

*/
class test : virtual public student{
    protected:
        float html,css;
    public:
    void set_marks(float a,float b)
    {
        html = a;
        css = b;
    }
    void print_marks(void){
        cout<<"The marks of the student in test is "<<html<<" and "<<css<<endl;
    }
};

class sports : virtual public student{
    protected:
        float score;
    public:
    void set_score(float sc){
        score = sc;
    }
    void print_score(void){
        cout<<"The marks of the student in sports is "<<score<<endl;
    }
};

class result : public test, public sports{ // virtual base class : in this result class we have to use virtual base class to avoid ambiguity
    
    float total;
    public:
        void display(){
            total = html + css + score;
            print_number();
            print_marks();
            print_score();
            cout<<"The total score of the student is "<<total<<endl;
        }
};
int main(){
result r1;
r1.set_number(31);
r1.set_marks(60,70);
r1.set_score(5);
r1.display();
}