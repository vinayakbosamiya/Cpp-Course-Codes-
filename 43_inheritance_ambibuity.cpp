// 42 file available exercise question available so that not available 

#include<iostream>
using namespace std;

class base1{
public:
    void greet(){
        cout<<"how are you "<<endl;
    }
};

class base2{
    public:
        void greet(){
            cout<<"kaise ho! you are fine "<<endl;
        }
};
    
class derived : public base1, public base2{
    int a;
    public:
        void greet(){
            base2 :: greet();
        }
};
// ------------------------------------------------------------------------------------------------------------------------
class B{
    public:
    void say(){
        cout<<"hello world"<<endl;
    }
};

// in below c class is derived from B and in c class available void say(), that is not available created obj is 
// called void say() function of class b but void say() function is available at class c that is called it.
class c : public B{
    int a;
    public:
        void say(){
            cout<<"hello guys how are you";
        }
};
int main(){

// derived d;
// d.greet();

c b1;
b1.say();

}