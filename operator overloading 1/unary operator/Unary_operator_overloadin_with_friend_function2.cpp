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

    // Friend function for unary ++
    friend Test operator ++ (Test &t);

    void show()
    {
        cout << x;
    }
};

// Definition of friend unary operator
Test operator ++ (Test &t)
{
    t.x = t.x + 1;     // increase value
    return t;
}

void main()
{
    clrscr();

    Test obj(10);

    cout << "Before: ";
    obj.show();       // 10

    ++obj;            // unary ++ operator overloading

    cout << "\nAfter: ";
    obj.show();       // 11

    getch();
}
