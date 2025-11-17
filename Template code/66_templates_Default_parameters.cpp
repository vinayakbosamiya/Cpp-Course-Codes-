#include <iostream>
using namespace std;
template <class T1 = int,class T2 = float,class T3 = char>
class demo{
    public:
        T1 a;
        T2 b;
        T3 c;
        demo(T1 A,T2 B,T3 C){
            this->a = A;
            this->b = B;
            this->c = C;
        }
        void display(){
            cout<<"The Value Of A is "<<a<<endl<<"The Value Of B Is "<<b<<endl<<"The Value Of C Is "<<c;
        }

};
// Note :- if We Create default parameters template will be Add This "<>" Sign of between object name and class name
int main(){
    demo<> d(1,11.22,'r');
    d.display();
    cout<<endl;

    demo <int,char,char> g(19,'v','b');
    cout<<endl;
    g.display();

}