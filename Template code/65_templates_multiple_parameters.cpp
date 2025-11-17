// ----- Class Template With Multiple Parameters -----

#include<iostream>
using namespace std;
/*template<class T1,class T2,....>(Comma Separated)

class class_name{
    // body
}
*/
template<class T,class S>
class demo{
    public:
        T data1;
        S data2;
        // create a constructor and use
    // demo(T a, S b){
    //     data1 = a;
    //     data2 = b;
    // };

        void dis(){
            cout<<"The Value Of Data1: "<<this->data1<<endl
                <<"The Value Of Data2: "<<this->data2;
        }
};

int main(){
    // Use Int And Char 
    demo<int,char> obj1;
    
    // // without constructor 
    // obj1.data1=10;
    // obj1.data2='V';
    // obj1.dis();
    
    // // with constructor
    // demo<int,char> obj1(12,'V');
    // obj1.dis();

    // Use Int And Float 
    demo<int,float> obj2;
    obj2.data1 = 21;
    obj2.data2 = 1.2;
    obj2.dis();


}