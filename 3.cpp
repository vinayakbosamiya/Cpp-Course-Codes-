#include<iostream>
using namespace std;

inline int sum(int a, int b){
    static int h = 0;
   h = h+1;
return a+b+h;
}



int main(){
    int a,b;
    cout<< "enter the number of A = ";
    cin>>a;
    cout<< "enter the number of B = ";
    cin>>b;
    cout<<"The Sum Of A and B is "<<sum(a,b)<<endl;
    cout<<"The Sum Of A and B is "<<sum(a,b)<<endl;
    return 0;
}