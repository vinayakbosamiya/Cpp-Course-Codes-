#include <iostream>
using namespace std;
class num{
int a,v;
public:
num(){
    a = 100;
}
num(int n)
{
    a = n;
    v = n;
}
// Note :- if we have not available copy constructor or not declare copy constructor compiler will provide default own constructor
num(num &obj) // it take reference of class num of obj type
{
    cout<<"this is copy constructor called"<<endl;
    a = obj.a;
    v = obj.v;
}
void display(){
    cout<<"the number for this obj is A "<<a<<endl;
    cout<<"the number for this obj is V "<<v<<endl;
}
};

int main(){
    num z(55);
    z.display();
    num y(z); // when pass obj in an obj it is take reference inside the constructor
    y.display();
    
    
    return 0;
}