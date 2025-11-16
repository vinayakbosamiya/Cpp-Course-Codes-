#include<iostream>
using namespace std;
class shop{
    int id;
    float price;
    public:
        void setdata(int a,float b){
            id = a;
            price = b;
        }
        void getdata(){
            cout<<"the value of id :"<<id<<endl;
            cout<<"the value of price :"<<price<<endl;
        }
};
int main(){
    int size = 3;
    shop *ptr = new shop[size];
    shop *temp = ptr;
    ptr->setdata(1,1.751);
    ptr->getdata();
    ptr++;
    ptr->setdata(2,2.456);
    ptr->getdata();
    ptr++;
    ptr->setdata(3,3.456);
    ptr->getdata();

    // int i,p;
    // float q;
    // for( i= 0 ; i<size; i++){
    //     cout<<"enter id and price of item "<<endl;
    //     cin>>p>>q;

    //     ptr->setdata(p,q);
    //     ptr++;
    // }
    // for(i = 0;i<size;i++){
    //     cout<<"Item Number : "<<i+1<<endl;
    //     temp->getdata();
    //     temp++;
    // }
   
     
}