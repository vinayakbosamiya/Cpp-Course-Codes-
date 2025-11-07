// #include<iostream>
// using namespace std;

// int main(){
    
// }

#include<iostream>
using namespace std;

class baseClass{
    public:
        int var_base;
        void display(){
            cout<<"displaying base class variable var_base "<<var_base<<endl;
        }
};
class derivedClass : public baseClass{
    public:
        int var_derived;
        void display(){
            cout<<"displaying base class variable var_base "<<var_base<<endl;
            cout<<"displaying derived class variable var_derived "<<var_derived<<endl;
        }
};
int main(){
    baseClass *baseclass_pointer;
    baseClass obj_base;
    derivedClass obj_derived;
    // Note: baseclass_pointer obj must call base class function not call derived class function because baseclass_pointer obj is created from baseClass 
    baseclass_pointer = &obj_derived; //pointing base class pointer to derived class 

    baseclass_pointer->var_base = 31;
    // baseclass_pointer->var_derived = 35;// will throw error
    // baseclass_pointer->display();

    // create derived class pointer 
    derivedClass *derivedclass_pointer;
    derivedclass_pointer = &obj_derived;
    derivedclass_pointer->var_derived = 44;
    derivedclass_pointer->display();
}