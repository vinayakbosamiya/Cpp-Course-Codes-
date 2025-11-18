#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    cout<<endl;
    cout<<"These Value Entered By User"<<endl;
    for(int i =0 ; i<v.size();i++){
        // cout<<v[i]<<"  ";
        cout<<v.at(i)<<"  ";
    }
    cout<<endl;
}
int main(){
    vector <int> vac1; //zero length integer vector
    vector <char> vac2(4); //4 element length character vector 
    vector <char> vac3(vac2); //4 element length character vector from vac2
    vector <int> v(6,3); // 6- element vector of 3s
    int ele,size;
    cout<<"Enter The Size Of Vector: ";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element ";
        cin>>ele;
        vac1.push_back(ele);
    }
    // vac1.pop_back();
    display(vac1);
    // vector<int> :: iterator itr = vac1.begin();
    // vac1.insert(itr+2,22,434);
    // display(vac1);
    cout<<endl;
    return 0;
}