#include <iostream>
using namespace std;
class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1); // declare
    void getData(){
        cout << "the value of a = "<<a<<endl;
        cout << "the value of b = "<<b<<endl;
        cout << "the value of c = "<<c<<endl;
        // cout << "the value of d = "<<d<<endl;
        // cout << "the value of e = "<<e<<endl;
    }
};

void employee :: setData(int a1, int b1, int c1){   // :: this double colon is scope resolution operator use to accesss class member or variable
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    employee emp;
    emp.setData(31,12,2006);
   emp.getData();
    return 0;

}