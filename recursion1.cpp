#include<iostream>
using namespace std;

int fectorial(int n){
    if(n<=1){
        return 1;
    }
    return n * fectorial(n-1);
}

int main(){
    int a;
    cout<<"enter the number of factorial A = "<<endl;
    cin>>a;
    
    cout<<"the number of factorial is "<<fectorial(a)<<endl;

}