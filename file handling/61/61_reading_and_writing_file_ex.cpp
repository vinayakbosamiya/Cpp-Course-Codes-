#include <iostream>
#include <fstream> 
using namespace std;

int main(){
    // // Connecting Our File With vout stream
    // ofstream vout("61_C++.txt");
    // //  Creating A Name String And Filling It With The String Entered By The User 
    // string name;
    // cout<<"Enter Your Name "<<endl;
    // cin>>name;
    // // Writing A String To The File 
    // vout<<"My String Is: " + name;
    // vout.close();

    ifstream vin("61_C++.txt");
    string str;

    getline(vin,str);
    cout<<"The File Content Is : "<<str;
    vin.close();




    return 0;
}
 