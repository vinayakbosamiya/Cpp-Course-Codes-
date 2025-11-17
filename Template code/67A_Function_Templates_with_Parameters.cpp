// Note :- if We Create Function With template will Not be Add This "<>" Sign
#include<iostream>
using namespace std;

// float funcAvg(int a,int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }
// float funcAvg2(int a,float b){
//     float avg = (a+b)/2.0;
//     return avg;
// }
template <class T1,class T2>
float funcAvg(T1 a,T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

 
int main(){
    float a;
    a =  funcAvg(5,2);
    // a = funcAvg2(5,2.4);
    printf("The Value Of These Number Is %.2f",a);
    
    return 0;

}