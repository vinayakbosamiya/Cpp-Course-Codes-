#include <iostream>
using namespace std;
int product(int a, int b)
{
    return a * b;
}
inline int products(int a, int b)
{
    return a * b;
}
int state()
{
    /*When a function ends, a normal variable is destroyed and forgets its value.
But a static variable keeps its value, so next time the function runs, it remembers its old value.*/


    // static variable was created only 1 time when the program is started  and keeps old values  when after the function ends.
    static int c = 0; // it is executes only once 
    c++; // and static variable is remember old values 
}
int main(){
    int x,y;
    cout<<"Enter The Value Of A and B: "<<endl;
    cin>>x>>y;
    // in this line when call product function when code or "value" copy In Parameters Of The Function And that function apply function logic and come back now; -> simple means jump values or "code" and come back
    cout<<"The Value Of A and B is " <<product(x,y)<<endl; 
    // this is inline function and in this function not jump values or code, this line do copy fuction logic at compile time 
    cout<<"The Value Of A and B is " <<products(x,y)<<endl; 

    cout<<"The Value Of C Is " <<state()<<endl;
    cout<<"The Value Of C Is " <<state()<<endl;
 



    
    return 0;
}

















// #include <iostream>
// using namespace std;
// int product(int a, int b)
// {
//     return a * b;
// }
// inline int products(int a, int b)
// {
//     return a * b;
// }
// int state()
// {
//     /*When a function ends, a normal variable is destroyed and forgets its value.
// But a static variable keeps its value, so next time the function runs, it remembers its old value.*/


//     // static variable was created only 1 time when the program is start  and keeps old values  when after the function ends.
//     static int c = 0; // it is executes only once 
//     c++; // and static variable is remember old values 
// }
// int main(){
//     int x,y;
//     cout<<"Enter The Value Of A and B: "<<endl;
//     cin>>x>>y;
//     // in this line when call product function when code or value copy that function and apply function logic and come back now  simple means jump values or code and come back
//     cout<<"The Value Of A and B is " <<product(x,y)<<endl; 
//     // this is inline function and in this function not jump values or code, this line do copy fuction logic at compile time 
//     cout<<"The Value Of A and B is " <<products(x,y)<<endl; 

//     cout<<"The Value Of C Is " <<state()<<endl;
//     cout<<"The Value Of C Is " <<state()<<endl;
 



    
//     return 0;
// }
