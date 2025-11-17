#include<iostream>
using namespace std;
template <class T>
class complex{
    public:
     T data;
     complex(T a){
        data = a;
     }

    // // ---------------- using scope resolution operator ----------------
    //  void display();

    void display(){
    cout<<data;
    }
};
// // ---------------- using scope resolution operator ----------------
// template <class T>
// void complex <T> :: display(){
//     cout<<data;
// }

// // ---------------- overload template function ----------------
void function(int a){
    cout<<"I am Function my value A: "<<a<<endl;
}
template <class T2>
void function(T2 a){
    cout<<"I am Template Function my value A: "<<a<<endl;
}

int main(){
    // complex <int> a(60);
    // cout<<a.data<<endl;

    // complex <float> b(60.6);
    // b.display();

    function(45.32); // Exact Match Takes Highest Priority

    return 0;
}