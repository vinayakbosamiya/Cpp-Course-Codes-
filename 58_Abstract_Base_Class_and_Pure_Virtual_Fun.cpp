#include<iostream>
#include<cstring>
using namespace std;
class stud{
    public:
    void set(){
        cout<<"this marks is best";
    };
    void get(){
        cout<<"this is good";
    }
};class teachar{
    public: 
    void set(){
        cout<<"this marks is best";
    };
    void get(){
        cout<<"this is good";
    }
};
int main(){
    stud s;
    s.get();
}