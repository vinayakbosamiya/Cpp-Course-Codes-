/* Binary Operator Overloading */
// link -> https://chatgpt.com/c/691c1fe3-c048-8321-a19d-6c6686189409
#include<iostream>
using namespace std;

class data{
    public:
        int num;
        data(int n){
            num = n;
        }

        // void operator+(data d2,data d3){
        data operator+(data d2){
            data d3(0);
            d3.num = num + d2.num;
            return d3;  
        }

        void display(){
            cout<<"The Value Of Num: "<<num<<endl;
        }
};
int main(){
data d1(2),d2(4),d3(6),d4(8),r(0);
// data d1(2),d2(4),r(0);
r = d1+d2+d3+d4; // ((d1.operator+(d2)).operator+(d3)).operator+(d4)
/* d1+d2 = d1.operator(d2) of result is stored in any temp obj, tmp = 6 */
/* d1+d2+d3 = tmp.operator(d3) of result is stored in any temp obj, tmp2 = 12 */
/* d1+d2+d3+d4 = tmp2.operator(d4) of result is stored in any temp obj, tmp3 = 20 */
// r = d1+d2;
r.display();
 

// Note:- when write d1 + d2 compiler internally understand as d1.operator+(d2)
}