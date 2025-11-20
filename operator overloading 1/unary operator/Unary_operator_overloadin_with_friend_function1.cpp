#include<iostream>
using namespace std;

class data{
    public:
        int num;

        data(int n){
            num = n;
        }

        // Friend function for unary ++ operator
        friend data operator++(data &t);

        void display(){
            cout << "value = " << num;
        }
};

// Definition of friend unary operator
data operator++(data &t){
    t.num = t.num + 1;   // increase value by 1
    return t;
}

int main(){
    data t(20);

    ++t;        // unary operator overloading using friend function

    t.display();   // Output: value = 21

    return 0;
}

