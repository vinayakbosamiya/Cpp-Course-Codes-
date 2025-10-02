#include <iostream>
using namespace std;
class complex{
int a, b;
    public:
        complex(void);
        void printMember(void){
            cout<<"The complex number is "<<a<<" + "<<b<<" i"<<endl;
        }
};
complex :: complex(void){
    a = 10;
    b = 0;
    // cout<<"The complex number is "<<a<<" + "<<b<<" i"<<endl;
    cout<<"hello world"<<endl;
}
int main(){
    complex c1;
    c1.printMember();
    return 0;
}

// properties of constructor 
/*
1 . constructor should be declared in the public section of the class
2 . they are automatically invoked whenever an object is created    (invoked means execute)
3 . they cannot return value and don't have any return type
4 . it can have default argument 
5 . we can not refer to their address
*/