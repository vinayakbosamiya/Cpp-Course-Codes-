#include <iostream>
using namespace std;
class Employee{
    int id;
    int salary;
    public:

    void setId(void)
    {
        salary = 120;
        cout<<"Enter the id of emp "<<endl;
        cin>>id;
    }
    void getId(void)
    {
        cout<<"The id of emp is "<<id<<endl;
    }
};

int main(){
    typedef Employee emp;
    // emp e1;
    // e1.setId();
    // e1.getId();
    
    emp e2[6];
    cout<<"the size of e2 "<<sizeof(e2)<<endl;
    // for(int i=0;i<sizeof(e2)/sizeof(e2[0]);i++)
    // {
    //     e2[i].setId();
    //     e2[i].getId();
    // }
    return 0;
}