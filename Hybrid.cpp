// 1. (Hybrid = Combination of multiple + multilevel inheritance)
// 2. (Hybrid = Combination of multilevel + multiple inheritance) 
#include <iostream>
using namespace std;

// Level 1
class A {
public:
    void showA() {
        cout << "I am A" << endl;
    }
};

// Level 2 (A -> B)
class B : public A {
public:
    void showB() {
        cout << "I am B" << endl;
    }
};

// Independent class
class C {
public:
    void showC() {
        cout << "I am C" << endl;
    }
};

// Hybrid class (B + C)
class D : public B, public C {
public:
    void showD() {
        cout << "I am D" << endl;
    }
};

int main() {
    D obj;

    obj.showA();  // from A
    obj.showB();  // from B
    obj.showC();  // from C
    obj.showD();  // from D

    return 0;
}


