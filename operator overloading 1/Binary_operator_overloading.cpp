#include<iostream.h>

class Test
{
    int x;

public:
    Test(int a)
    {
        x = a;
    }

    Test operator + (Test t)
    {
        Test temp(0);
        temp.x = x + t.x;
        return temp;
    }

    void show()
    {
        cout << x;
    }
};

void main()
{
    Test t1(10);
    Test t2(20);

    Test t3 = t1 + t2;  // operator overloading works here

    t3.show();  // Output: 30
}
