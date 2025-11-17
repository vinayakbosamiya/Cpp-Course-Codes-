#include<iostream>
using namespace std;
// in the template We passing a data type as argument: 
// Ex:- template <class T> in this pass a data type as argument inside a T
template <class T>
class vector{
 public:
    T * arr;
    int size;
    vector(int s){
    // vector(int size){
        size = s;
        // this->size = size;
        // arr = new int[size];
        arr = new T[size];
    }
    T dotproduct(vector &v){
        T d = 0;
        for(int i = 0; i<size; i++){
            d += this->arr[i] * v.arr[i];
        }
        return d;

    }
};
int main(){
    // vector v1(3);
    // v1.arr[0]=2;
    // v1.arr[1]=4;
    // v1.arr[2]=6;
    
    // vector v2(3);
    // v2.arr[0]=1;
    // v2.arr[1]=3;
    // v2.arr[2]=5;

    // int a= v1.dotproduct(v2);
    // cout<<a<<endl;
    vector <float>v1(3);
    v1.arr[0]=2.2;
    v1.arr[1]=4.4;
    v1.arr[2]=6.6;
    
    vector <float>v2(3);
    v2.arr[0]=1.1;
    v2.arr[1]=3.3;
    v2.arr[2]=5.5;

    float a= v1.dotproduct(v2);
    cout<<a<<endl;
    


    return 0;
    
}