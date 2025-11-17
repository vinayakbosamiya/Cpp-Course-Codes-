// Note :- if We Create Function With template will Not be Add This "<>" Sign
// this is swap Number example Using function with template 
#include<iostream>
using namespace std;
 
template<class TT>
void swapp(TT &a,TT &b){
    TT temp = a;
    a = b;
    b = temp;
  
}
int main(){
 
    double c=10.10,d=20.20;
    cout<<"without the swap c: "<<c<<endl;
    cout<<"without the swap d: "<<d<<endl;
    swapp(c,d);
    cout<<endl;
    cout<<"after the swap a: "<<c<<endl;
    cout<<"after the swap b: "<<d<<endl;
    return 0;

}