#include<iostream>
using namespace std;
class test{
    int x;
    public:
        // friend test operator++(test &tt);   /* uncomment when we want to overload unary operator using friend function with reference */
        friend test operator++(test tt);  /* uncomment when we want to overload unary operator using friend function without reference */
        test(){
            x=10;
        }
        void display(){
            cout<<"Value Is : "<<x<<endl;
        }
};

/*
// // uncomment when we want to overload unary operator using friend function with reference 
test operator++(test &tt){ 

    // // uncomment below code when we accept reference with friend function 
        tt.x = tt.x+1;
        return tt;
    };  
*/

// // uncomment below code when we want to create more 1 object and not accept argument with friend function
    // /* 
         test operator++(test tt){  // uncomment when we want to overload unary operator using friend function without reference 
            test t1;     
            t1.x = tt.x+1;
            return t1;        
        };
    // */
int main(){
    test t,res;
    cout<<"Before :"<<endl;
    t.display();
    
    cout<<"After :"<<endl;
    // /* 
        // // uncomment below code when we want to create more 1 object and not accept argument with friend function
        res = ++t; // res = operator++(t)
        res.display();
    // */

    /* 
    // // uncomment below code when we accept reference with friend function 
        ++t; // // operator++(t)
        t.display();
    */
    
}

// class binary{
//     int y;
//     public:
//         binary(int x){
//             y = x;
//         }
//         // friend binary operator+(binary p1,binary p2);
//         binary operator+(binary p1){
//             y = y+ p1.y;
//             return y;
//         }
//         display(){
//             cout<<"Value Is "<<y<<endl;
//         }
// };
// // binary operator+(binary p1,binary p2){
// //     binary res(0);
// //     res.y = p1.y+p2.y;
// //     return res;
// // };
// int main(){
//     binary b1(10),b2(20),p(12),b3(0);
//     b3 = b1+b2+p;
//     b3.display();

// }