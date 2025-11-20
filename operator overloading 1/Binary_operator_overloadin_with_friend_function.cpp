#include <iostream.h>
#include <conio.h>

class Test
{
    int x;

public:
    Test(int a)
    {
        x = a;
    }

    // Friend function declaration
    friend Test operator + (Test t1, Test t2);

    void show()
    {
        cout << x;
    }
};

// Friend function definition
Test operator + (Test t1, Test t2)
{
    Test temp(0);
    temp.x = t1.x + t2.x;   // Add values of both objects
    return temp;
}

void main()
{
    clrscr();

    Test obj1(10);
    Test obj2(20);

    Test obj3 = obj1 + obj2;  // operator overloading using friend function

    cout << "Result: ";
    obj3.show();    // Output: 30

    getch();
}

