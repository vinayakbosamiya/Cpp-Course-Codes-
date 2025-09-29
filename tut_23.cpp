#include <iostream>
using namespace std;

class Shop
{
    int itemId[50];
    int itemPrice[100];
    int count;

public:
   void  couter(void);
     void displayPrice(void);
    void  setPrice(void);
};

 void Shop :: couter(void){count = 0;}

    void Shop :: setPrice(void){
        cout<<"Enter id Of Your Item No "<<count+1<<endl;
        cin>>itemId[count];
        
        cout<<"Enter Price Of Your Item"<<endl;
        cin>>itemPrice[count];
        count++;
    };
    
         
   void Shop :: displayPrice(void){
        for (int i = 0; i < count; i++)
        {
            cout<<"The Price Of Item With Id "<<itemId[i]<<" \t is "<<itemPrice[i]<<endl;
        }
        
    };
int main()
{
    Shop dukan;

    dukan.couter();
    // dukan.setPrice();
    // dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();
    return 0;
}