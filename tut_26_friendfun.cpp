#include <iostream>
using namespace std;
class complex{
int a, b;
public:
    void setnum(int n1, int n2)    
    {
        a = n1;
        b = n2;
    }
    friend complex sumcmx(complex o1,complex o2);
    void printnum(){
        cout<<"your number is "<<a<<" + "<<b<<" i "<<endl;
    }


};
complex sumcmx(complex o1,complex o2)
{
    complex o3;
    o3.setnum(o1.a + o2.a, o1.b + o2.b);
    return o3;
}
 typedef complex cmx;
int main(){
   
    cmx c1,c2,c3;   
    c1.setnum(2, 4);
    c2.setnum(3, 5);
    c1.printnum();
    c2.printnum();

    c3 = sumcmx(c1,c2);
    c3.printnum();
    c3.printnum();
    return 0;

}