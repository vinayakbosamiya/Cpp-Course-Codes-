/*
Note : tut_36 Code is not available because in that available only explaination
rules of inheritance visibility :
1. default visibility is private
2. public visibility mode: public member of the base class becomes public member of the derived class
3. private visibility mode: public member of the base class becomes private member of the derived class

Syntax 
class {{Base-Class-Name}} : {{Visibility-Mode}} {{Base-Class-Name}}
{
// code
}
*/

#include<iostream> 
using namespace std;
class emp{
    public:
    int id;
    float salary;
    string emp_name;
    emp(){}
        emp(int inpid,string name){
            id = inpid;
            salary = 1000;
            emp_name = name;
        };
        void dis(){
            cout<<"the id of "<<emp_name<<" is "<<id<<" and the salary of "<<emp_name<<" is "<<salary<<endl;
           
        }
};

class programmer :  emp
{
    public:
    programmer(int inpid,string name)
    {
        id = inpid;
        emp_name = name;
    }
    int languagecode = 2;
    void getData(){
        cout<<"this is a id of programmer is "<<id<<" and name is "<<emp_name<<endl;
    }
};
typedef programmer coder;


int main(){
emp rahul(1,"rahul");
emp suresh(2,"suresh");
rahul.dis();
suresh.dis();
// cout<<"the name is " << suresh.id<<endl;


coder p1(31,"vinay");
p1.getData();


    
    

}
