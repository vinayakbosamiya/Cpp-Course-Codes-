#include<iostream>
using namespace std;

class employee{
    int id;
    static int count; // this line is know to a compiler available count variable for all objects 
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

int employee :: count; //create a memory for static count variable 

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