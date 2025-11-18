// reference link for map methods => https://cplusplus.com/reference/map/map/

#include<iostream>
#include<map>
#include<string>

using namespace std;
// Map Is An Associative Array
int main(){
    map <string, int> marksMap;
    marksMap["H"]=56;
    marksMap["r"]=89;
    marksMap["w"]=45;

    marksMap.insert({{"rahul",448},{"rohan",4443}});
    map<string,int> :: iterator i;
    for(i = marksMap.begin();i!=marksMap.end();i++){
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }
    cout<<"The Size Of MarksMap Is "<<marksMap.size()<<endl;
    cout<<"The size of Max MarksMap is "<<marksMap.max_size()<<endl;
    cout<<"The Size Of empty MarksMap Is "<<marksMap.empty()<<endl;
    
}