// reference link for algorithm => https://cplusplus.com/reference/algorithm/
// reference link for functions => https://cplusplus.com/doc/tutorial/functions/
#include<iostream>
#include<functional>

#include<algorithm>
using namespace std;

int main(){
    // function object : function object wrapped in a class so that it available like an object
    // function object is known as functor

    int arr[] = {2,6,4,9,5,0,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+size);// it is sort ascending order
    sort(arr,arr+size,greater<int>());// it is sort descending order
    // for(int i= 0;i!= size;i++){
    for(int i= 0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}