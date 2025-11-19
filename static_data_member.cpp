/* 1. static variable is common for all object of class 
   2. static variable is shared by the all object
   3. static variable is know as class variable 
   4.  it is not atteched with object It is atteched with class  
*/
#include<iostream>
using namespace std;

class employee{
    int id;
    static int count;
    // int count = 0;
    public:
    void setdata(){
        cout<<"enter the id"<<endl;
        count++;
        cin>>id;
    }
    void getdata(){
        cout<<"the value of id is "<< id << " the value of count is "<<count<<endl ;
    }
    static void getCount(){
        cout<<"the value of count is "<<count<<endl;
    }
};

int employee :: count; // Default value is 0

int main(){
    typedef employee emp;
    emp v,i,n;
    v.setdata();
    v.getdata(); 
    // v.getCount();
    emp::getCount();
    
    i.setdata();
    i.getdata(); 
    // i.getCount();
    emp::getCount();

    n.setdata();
    n.getdata(); 
    // n.getCount();
    emp::getCount();
    return 0;

}

