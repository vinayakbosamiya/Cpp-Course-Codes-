#include<iostream>
using namespace std;
int main(){
    int marks[6] = {50,60,70,80,90,40};
    int size = sizeof(marks)/sizeof(marks[0]);
    // cout<<"this is "<<sizeof(marks)<<endl;
    // cout<<"this is "<<sizeof(marks[0])<<endl;
    // // cout<<"this is "<<size<<endl;
    // for(int i = 0; i<size; i++){
    //     cout<<"this is marks of arr "<<marks[i]<<endl;
    // }

    int *p= marks; // this *p pointer was point to first element of marks array 
    for(int j = 0; j<size ;j++){
        cout<<"print a marks using array with pointer "<< *(p + j) <<endl;
    }
    return 0;
}