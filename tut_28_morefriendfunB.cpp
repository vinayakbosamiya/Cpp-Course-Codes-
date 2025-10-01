#include <iostream>
using namespace std;

class c2;

class c1{
    int val;
    public:
        void setval(int a)
        {
            val = a;
        }
        void display(void)
        {
            cout<<"The value is "<<val<<endl;
        }
        friend void exchange(c1 &, c2 &);
};

class c2{
    int val2;
    public:
        void setval(int a)
        {
            val2 = a;
        }
        void display(void)
        {
            cout<<"The value is "<<val2<<endl;
        }
           friend void exchange(c1 &,c2 &);
};

void exchange(c1 &X,c2 &Y)
{
    int tm = X.val;
    X.val = Y.val2;
    Y.val2 = tm;
}
int main(){
    c1 x1;
    c2 y1;

    x1.setval(10);
    y1.setval(20);
   
    
    exchange(x1,y1);

    cout<<"After change the value "<<endl;
   x1.display();
    y1.display();

    
    return 0;
}