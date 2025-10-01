#include <iostream>
using namespace std;
class Y;
class X{
int data;
public:
void setData(int val)
{
    data = val;
}
friend void add(X, Y);
};

class Y{
    int num;
    public:
    void setval(int val)
    {
        num = val;
    }
    friend void add(X, Y);
};
void add(X o1, Y o2)
{
 cout<<"sum Of  "<<o1.data<<" + "<<o2.num<<" is "<<o1.data + o2.num<<endl;
}

int main(){
    X a1;
    Y a2;
    a1.setData(10);
    a2.setval(10);
    add(a1, a2);

    return 0;
}