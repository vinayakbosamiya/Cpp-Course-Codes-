#include <iostream>
using namespace std;
class Simple{
    int data1;
    int data2;
    public:
        Simple(int a = 8, int b=9){
            data1 = a;
            data2 = b;

        }
        void prn()
    {
        cout<<"your number is "<<data1<< " And "<<data2<<endl;
    }

};

int main(){
    Simple c1(12,11);
    c1.prn();
    Simple c2(12);
    c2.prn();
    Simple c3;
    c3.prn();
    return 0;
}