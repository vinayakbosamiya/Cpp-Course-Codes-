#include<iostream>
#include<cstring>
using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s,float r){
            title = s;
            rating = r;
        }
    // virtual void display(){
    //     cout<<"this is virtual base class"<<endl;
    // }
    virtual void display()=0; // called do-nothing function  --->  pure virtual function
};

class Cwhvideo: public CWH{
    float videolength;
    public:
        Cwhvideo(string s,float r, float vl): CWH(s,r){
            videolength = vl;
        }
    // void display(){
    //     cout<<endl;
    //     cout<<"This Is Amazing Video With Title "<<title<<endl;
    //     cout<<"Ratings: "<<rating<<" Out Of 5 Stars "<<endl;
    //     cout<<"Length Of This Video Is: "<<videolength<<" Minutes "<<endl;
    //     cout<<endl;
    // }
};
class Cwhtext: public CWH{
    int words;
    public:
        Cwhtext(string s,float r, int wc): CWH(s,r){
            words = wc;
        }
    
    void display(){
        cout<<endl;
        cout<<"This Is Amazing Text Tutorial With Title "<<title<<endl;
        cout<<"Ratings Of This Text Tutorial : "<<rating<<" Out Of 5 Stars"<<endl;
        cout<<"No. Of Words In This Tutorial Is:"<<words<<" Words "<<endl;
        cout<<endl;
    }
};

int main(){
    string title;
    float rating,vlen;
    int words;

    // for video
    title = "codewithharry";
    vlen = 4.56;
    rating = 3.4;

    Cwhvideo codevideo(title, rating, vlen); 
    // codevideo.display();

    // for text
    title = "codewithharry";
    words = 456;
    rating = 3.4;

    Cwhtext codetext(title, rating, words); 
    // codetext.display();

    CWH* tuts[2];//array of pointers to objects. more simple words "base class no pointer array"
    tuts[0] = &codevideo;
    tuts[1] = &codetext;
    
    tuts[0]->display();
    tuts[1]->display();
    return 0;
}
 