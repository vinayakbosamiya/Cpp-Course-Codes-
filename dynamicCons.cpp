#include <iostream>
using namespace std;
class bankDeposite{
int principal, year;
float intrastRate,returnVal;
public:
void show(){
    cout<<"Principal Amount Was "<<principal 
        <<" Return Value After "<<year
        <<" year is "<< returnVal<<endl;
}
bankDeposite(){}
bankDeposite(int p, int y,float r){
    principal = p;
    year = y;
    intrastRate = r;
    returnVal = principal;

    for(int i = 0; i<y;i++)
    {
        returnVal = returnVal * (1+r);
    }
}
bankDeposite(int p, int y,int r);


};
bankDeposite :: bankDeposite(int p, int y,int r){
    principal = p;
    year = y;
    intrastRate = float(r)/100;
    returnVal = principal;

    for(int i = 0; i<y;i++)
    {
        returnVal = returnVal * (1+intrastRate);
    }
}

int main(){
bankDeposite bd1,bd2,bd3;
    int p,y,R;
    float r;
    

    // cout<<"enter the value of p y and r"<<endl;
    // cin>>p>>y>>r;
    // bd1 = bankDeposite(p,y,r);
    // bd1.show();
    
    cout<<"enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = bankDeposite(p,y,R);
    bd2.show();
    
    // bd3 = bankDeposite(p,y,r)
    // bd3.show();
    return 0;
}