// vector -> https://cplusplus.com/reference/vector/vector/
#include<iostream>
#include<vector>
using namespace std;
template <class T>
void display(vector<T> &v){
    cout<<endl;
    cout<<"These Value Entered By User"<<endl;
    for(int i =0 ; i<v.size();i++){
        cout<<v[i]<<"  ";
        // cout<<v.at(i)<<"  ";
    }
    cout<<endl;
}
int main(){
    vector <int> vac1; //zero length integer vector
    // display(vac1);

    vector <char> vac2(4); //4 element length character vector 
    // vac2.push_back('v');
    // display(vac2);

    vector <char> vac3(vac2); //4 element length character vector from vac2
    display(vac3);

    vector <int> vac4(6,1); // 6- element vector of 3s
    display(vac4);
    cout<<vac4.size(); 

    /* 
        int ele,size;
        cout<<"Enter The Size Of Vector: ";
        cin>>size;
    */

   /*   for(int i=0;i<size;i++)
        {
            cout<<"Enter the element ";
            cin>>ele;
            vac1.push_back(ele);
        }
    */

    /* 
        vac1.pop_back();
        display(vac1);
    */

    /*
        vector<int> :: iterator itr = vac1.begin();
        vac1.insert(itr+2,22,434);
        display(vac1);
    */

    // cout<<endl;
    return 0;
}