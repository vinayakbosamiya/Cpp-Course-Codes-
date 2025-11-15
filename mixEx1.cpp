#include<iostream>
using namespace std;

// int main(){
//     int a = 31;
//     int* ptr = &a;
//     cout<<"The Value Of Ptr Is "<<*(ptr)<<endl; // we do dereference the ptr
    
//      int *p = new int(4);
//     delete p;
//     delete ptr; 
//     cout<<"The Value At P Is "<<*(p)<<endl; // we do dereference the ptr 
//     // delete[] arr for delete dynamic arr pointer 
// }

// class test{
//     int a;
//     int b;
//     public:
//         // test(int c,int d): a(c),b(d){
//         // test(int c,int d): a(d+c){
//         test(int c,int d): b(d),a(c*b){
            
//             cout<<"Constructor Called!!!"<<endl;
//             cout<<"The Value Of a "<<a<<endl;
//             cout<<"The Value Of b "<<b<<endl;
//         }
// };
// int main(){
//     test t(10,20);
// }

class stud{
    int a;
    public:
    void setData(int b){
        a = b;       
    }
    void getData(){
         cout<<"the value of a is "<<a<<endl;
    }
};
int main(){
    // --> create s obj and print the data
//     stud s;
//     s.setData();

//     // --> create ptr name pointer that points to s obj and dereference ptr pointer obj and print the data
//     stud *ptr = &s;
//     (*ptr).setData();


// //     --> create dynamic memory allocation pointer using new keyword
//     stud *p = new stud;
//     p->setData();
//     (*p).setData();


//      --> create array of obj with dynamic memory allocation using new keyword
    stud *arr = new stud[4];        
    // arr->setData(10);
    arr->setData(10);
    arr->getData(10);
 
    
}