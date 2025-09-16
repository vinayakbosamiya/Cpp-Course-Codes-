#include<iostream>
using namespace std;


int main(){
   long long factorial = 1;   
    int a;

    cout<<"enter the number of factorial A = "<<endl;
    cin>>a;

    
    for(int i = 1; i <= a; i++){
    factorial = factorial * i;
    //    1 = 1 * 1
    //    2 = 1 * 2
    //    6 = 2 * 3
    //   24 = 6 * 4
    // 120 = 24 * 5

    }
    cout<<"the value of factorial is "<<factorial;

 
}