#include <iostream>
using namespace std;

int count = 0;
class num {
    public:
    num(){
            count++;
            cout<<"this is the time when constructor is called for object "<<count<<endl;
    }

    ~num(){
        cout<<"this is the time when my destructor is call for my object "<<count<<endl;
        count--;
    }
};


int main()
{
    cout<<"We Are Inside Our Main Function "<<endl;

    cout<<"Creating First Object n1"<<endl;\
    cout<<endl;
    num n1;
    cout<<endl;


    {
        cout<<"entering this block"<<endl;
        cout<<"creating 2 more objects "<<endl;
        num n2,n3;
        cout<<"exiting this block"<<endl;
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;

    cout<<"back to the Main Function"<<endl;
    
}