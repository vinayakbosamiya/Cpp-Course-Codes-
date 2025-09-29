// check the binary number format program

#include<iostream>
using namespace std;

class binary{
string s;
public:
 void read(void);
 void chk_bin(void);
 void ones(void);
 void displays(void);
};

void binary :: read(void){
    cout<<"Enter a Binary number"<<endl;
    cin>>s;
};

void binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    { 
        if(s.at(i)!='0' && s.at(i)!='1') // .length() is check the length of string and .at() is check the at string index
        {
            cout<<"\n Incorrect Binary Format"<<endl;
            exit(0);
        }
    }
    
}

void binary :: ones(void){
    chk_bin();
      for (int i = 0; i < s.length(); i++)
    { 
        if(s.at(i)=='0') // .length() is check the length of string and .at() is check the at string index
        {
            s.at(i) = '1';
        }else{
            s.at(i) = '0';
        }
    }
}void binary :: displays(void){
    cout<<"\ndisplay your binary number"<<endl;
      for (int i = 0; i < s.length(); i++)
    { 
        cout<<s.at(i);
    }
}
int main(){
    binary b;
    b.read();
    // b.chk_bin();
    b.displays();
    b.ones();
    b.displays();

}