#include<iostream>
using namespace std;

int main(){
    int a = 4;
    int *ptr = &a;
    cout<<"the value of a is "<<*(ptr)<<endl; 

    // new Operator
    // new Operator is create dynamic memory allocation


    // Delete Operator
    // Delete Operator is Delete dynamic memory allocation


    // int *p = new int(30);
    float *p = new float(3.1415);
    cout<<"the value at address p is "<< *(p) <<endl;

    int *arr = new int[3];
    arr[0] = 70;
    arr[1] = 80;
    arr[2] = 90;
     // delete operator
    // delete p;
    delete [] arr;
    cout<<"the value of arr[0] is "<< arr[0] <<endl;
    cout<<"the value of arr[0] is "<< arr[1] <<endl;
    cout<<"the value of arr[0] is "<< arr[2] <<endl;
    
    
}