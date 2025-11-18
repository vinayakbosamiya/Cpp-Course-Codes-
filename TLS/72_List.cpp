// reference Link = https://cplusplus.com/reference/list/list/
#include<iostream>
#include<list>
using namespace std;
void display(list<int> &lst){
list<int> :: iterator it;
    for(it = lst.begin(); it!=lst.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
    list<int> list1; //List Of 0 Length
    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(4);
    list1.push_back(23); 
/* // removing element from the list;
    // list1.pop_front();   
    // list1.pop_back();
    // list1.remove(6);
*/

/* // // shorting the list
    // list1.sort();
    display(list1);
*/ 
    /*
        list<int> :: iterator itr;
        itr = list1.begin();
        cout<<*itr+1;
    */
    list<int> list2(3); // Empty list of size 3
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 32;
    iter++;
    *iter = 323;
    iter++;
    display(list2);
    list1.sort();
    list2.sort();
    // merging the list
    list1.merge(list2);
    cout<<endl;
    cout<<"List the After the Merging "<<endl;
    display(list1);
    
    // // reversing the list
    list1.reverse();
    cout<<"after the reversing the list"<<endl;
    display(list1);
}   