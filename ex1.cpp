#include<iostream>
using namespace std;
class base1{
    int data1;
    public:
        base1(int i){
            data1 = i;
            cout<<"Base1 constructor Called!!!"<<endl;
        }
        b1display(){
            cout<<"The Value Of The Base 1 : "<<data1<<endl;
        }
        
};
class base2{
    int data2;
    public:
        base2(int i){
            data2 = i;
            cout<<"Base2 constructor Called!!! "<<endl;
        }
        b2display(){
            cout<<"The Value Of The Base 2 : "<<data2<<endl;
        }
};
class derived : public base1, public base2{
    int d1,d2;
    public:
        derived(int a, int b, int c, int d) : base1(a),base2(b){
            d1 = c;
            d2 = d;
        }
        
        display(){
            // base1::b1display();
            // base2::b2display();
            cout<<"The Value Of The Derived Class Is : "<<d1<<" And "<<d2<<endl;
        }
};
int main(){
derived deta(1,2,3,4);
deta.b1display();
deta.b2display();
deta.display();
}




















































// #include<iostream>
// using namespace std;

// class student{
//     protected:
//         int roll_no;
//     public:
//         void set_rollno(int a)
//         {
//             roll_no=a;
//         }
//         void getrollno(){
//             cout<<"your roll no is "<<roll_no<<endl;
//         }
// };
// class text : virtual public student{
//     protected:
//     float html,css;
//     public:
//         void setMarks(float m1,float m2){
//             html = m1;
//             css = m2;             
//         }
//         void getMarks(){
//             cout<<"Your HTML Marks : "<<html<<" And Your Css Marks : "<<css<<endl;
//         }
// };
// class sport : virtual public student{
//     protected:
//         float score;
//     public:
//         void setScore(float sc){
//            score = sc;
//         }
//         void getscore(){
//             cout<<"your argument is "<<score<<endl;
//         }
    
// };
// class result : public text, public sport{
//     float total;
//     public:
//         void display(){
//             total = html + css + score;
//             getrollno();
//             getMarks();
//             getscore();
//             cout<<"The total : "<<total<<endl;
//         }

// };
// int main(){
//     result r;
//     r.set_rollno(1);
//     r.setMarks(70.9,81.8);
//     r.setScore(70);
//     r.display();
//     return 0;
// }