#include<iostream>
using namespace std;
class Shop{
    int id;
    float price;
    public:
        void setData(int a,float b){
            id = a;
            price = b;
        }
        void getData(){
            cout<<"the id of the item is "<<id<<endl;
            cout<<"the price of the item is "<<price<<endl;
        }
};
int main(){
    int s = 2;

   Shop *ptr = new Shop[s];
   Shop *tempptr = ptr;
   int id,i;
   float p;

   for(i = 0;i < s;i++){
        cout<<endl;
        cout<<"enter id and price of item "<<i+1<<endl;
        cin>>id>>p;
        ptr->setData(id,p); 
        // cout<<endl;
        ptr++;
    }
    cout<<endl;
    for(i = 0;i < s;i++){
        cout<<"Item number is "<<i+1<<endl;
        tempptr->getData();
        cout<<endl;
        tempptr++;
    }

}