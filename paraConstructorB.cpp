// example of parameterized constructor
#include <iostream>
using namespace std;
class point{
    int x,y;
    public:
    point(int a,int b)
    {
        x = a;
        y = b;
    }
    void dis()
    {
        cout<<"The point is ("<<x<<","<<y<<")"<<endl;
    }
   

};
 
int main(){
         point p(1,1);
         point q(4,6);
         p.dis();
         q.dis();
    return 0;
}