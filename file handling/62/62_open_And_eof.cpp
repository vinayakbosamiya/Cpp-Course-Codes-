#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream out;
    out.open("sample_62.txt");
    out<<"Hello, How Are You And Welcome\n";
    out<<" To C++ Repository!!!!";
 

    out.close();
    
    ifstream in;
    string st;
    in.open("sample_62.txt");
    // method 1
    // in>>st;

    // // method 2
    // getline(in,st);
    // cout<<st;
    // getline(in,st);
    // cout<<st;

/*  // method 3

in.eof() == 0 નો અર્થ શું?
in.eof() → જણાવે છે કે ફાઇલ પૂરી થઈ ગઈ છે કે નહીં
જ્યારે ફાઈલ પૂરી ન થઈ હોય → eof() = 0
જ્યારે ફાઈલ પૂરી થઈ જાય → eof() = 1

*/
    while(in.eof() == 0){
// // // in while loop use method 1.
        // in>>st;
        // cout<<st + " ";
// // // in while loop use method 2.

        getline(in,st);
        cout<<st;
    }
}