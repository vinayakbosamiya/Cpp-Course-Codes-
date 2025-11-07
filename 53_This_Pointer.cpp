#include<iostream>
using namespace std;
class A{
    int a;
    public:
    // A & setData(int a){ //this is return object whose value set do by us 
    voidsetData(int a){
        this->a = a; // this pointer is point to current obj means this pointer is point now that obj whose call member function
        // return *this;
    }
    void getData(){
        cout<<"the value of a is "<<a<<endl;
    }
};
int main(){
   A a;
   a.setData(39) ;
   a.getData();
}