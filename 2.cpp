#include<iostream>
using namespace std;
int & swap(int &a, int &b) // 31 5 
{
    
    int c = a; //c 31
    a = b;  // a 5
    b = c; // b 31
    // return a;
}

int swap1(int *a, int *b)
{
    
    int c = *a;
    *a = *b;
    *b = c;
}

int main(){
    int a = 4, b = 5; 
    cout<<"without swap- a : "<<a<<" b : "<<b<< endl;
    swap(a,b) = 31; 
    cout<<"with swap- a : "<<a<<" b : "<<b<<endl;
    // swap1(&a,&b);
    // cout<<"with swap with pointer - a : "<<a<<" b : "<<b;
}