#include <iostream>
#include<fstream> 
/*
The Use Full Classes For Working With Files In c++ Are:
1. fstreambase
2. ifstream --> Derived From fstreambase
3. ofstream --> Derived From fstreambase

In Order To Work With Files In C++, You Will Have To Open It. There Are 2 Ways To Open Files :

1. Using Constructor 
2. Using Member Function Open() Of The Class
*/
using namespace std;

int main(){
    string str = "Welcome To C++ Repository !!!!";
    string str2;
// Opening File Using Constructor And Writing To It.
    // ofstream out("60_C++.txt"); // // Write Operation
    // out<<str;
    // out<<str;
    
// // Opening File Using Constructor And Reading It.
    ifstream in("60_C++.txt"); // Read Operation
    // in>>str2;
    getline(in,str2);
    cout<<str2;


    return 0;
}
// This Is Sample File For C++ Code For This File "60_reading_and_writing_file.cpp"