// 46 file have understand of constructor in derived class

// 47 file means this file have exersize code solution write
#include<iostream>
#include<cmath>
using namespace std;
class SimpleCalculator{
int a,b;
public:
  void setData1(){
    cout<<"Enter the Value of A: "<<endl;
    cin>>a;
    cout<<"Enter the Value of B: "<<endl;
    cin>>b;
  }
  
void getData1(){

  cout<<"The Value Of A + B is " << a + b<<endl;
  cout<<"The Value Of A - B is " << a - b<<endl;
  cout<<"The Value Of A * B is " << a * b<<endl;
  cout<<"The Value Of A / B is " << a / b<<endl;
}
};
class ScientificCalculator{
int a,b;
public:
  void setData2(){
    cout<<"Enter the Value of A: "<<endl;
    cin>>a;
    cout<<"Enter the Value of B: "<<endl;
    cin>>b;
  }
  
void getData2(){

  cout<<"The Value Of cos(a) is " << cos(a)<<endl;
  cout<<"The Value Of sin(a) is " << sin(a)<<endl;
  cout<<"The Value Of exp(a) is " << exp(a)<<endl;
  cout<<"The Value Of tan(a) is " << tan(a)<<endl;
}
};

class hybridCal : public SimpleCalculator, public ScientificCalculator{
     
};
typedef SimpleCalculator  sc;
typedef ScientificCalculator sf;
typedef hybridCal hyc;



int main(){
    hybridCal cal;
    cal.setData1();
    cal.getData1();

    cal.setData2();
    cal.getData2();
}
