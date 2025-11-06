#include<iostream>
using namespace std;
/*
syntax of initialization list in constructor:
constructor (argment-list) : initialization-section
{
assignment + other code;
}

class test  {
int a,int b;
public:
    test(int i,int j) : a(i),b(j){
    constructor-body;
    }
};
*/

class test{
int a, b;
public:
    // test(int i,int j) : a(i),b(j){
    // test(int i,int j) : a(i),b(i+j){
    // test(int i,int j) : a(i),b(2 * j){
    // test(int i,int j) : a(i),b(a * j){
    test(int i,int j) : b(j),a(i+b){ // 🔴 Red Flag this will create problem because a is initialized first
   cout<<"constructor is called"<<endl;
   cout<<"a is "<<a<<endl;
   cout<<"b is "<<b<<endl;
    }
};

int main(){
    test t(10,20);
    return 0;
}