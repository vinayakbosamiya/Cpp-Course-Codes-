#include<iostream>
#include<cstring>
using namespace std;
class cwh{
    protected:
        string title;
        float rating;
    public:
        cwh(string  s, float r)
        {
            title= s;
            rating = r;
        }
        virtual void display(){}
};

class cwhvideo : public cwh{
    int video_length;
    public:
     cwhvideo(string s, float r, float vl) : cwh(s, r)
     {
        video_length = vl;
     }
     void display(){
        cout<<"this is amazing repo for c++ programs : "<<title<<endl;
        cout<<"rating of this repo is "<<rating<<" out of 5 stars"<<endl;
        cout<<" number of le video available "<<video_length<<endl;

      

     }
};
class cwhtext : public cwh{
    int words;
    public:
     cwhtext(string s, float r, int wc) : cwh(s, r)
     {
        words = wc;
     }
     void display(){
        cout<<"this is amazing text repo with title for c++ programs : "<<title<<endl;
        cout<<"rating of this repo is "<<rating<<" out of 5 stars "<<endl;
        cout<<" number of program available "<<words<<endl;
     }
};
int main(){
    string title;
    float rating,vlen;
    int words;
// use obj
    title = "c++ repo for beginners";
    rating = 4.5;
    vlen = 4.5;
    cwhvideo cpp_repo(title, rating, vlen);
    // cpp_repo.display();

  
      title = "c++ repository";
    rating = 4.5;
    words = 400;
    
    cwhtext cpp_repo_text(title, rating, words);
    // cpp_repo_text.display();

      // use pointer 
      cwh* text_repo[2];
       text_repo[0] = &cpp_repo;
        text_repo[1] = &cpp_repo_text;

        text_repo[0]->display();
        text_repo[1]->display();

}

/*
 Rules Of virtual function :

 1.They Can Not Be Static 
 2. They Are Access By Obj Pointer 
 3. Virtual Function Can Be Friend Of Another Class
 4. A Virtual Function In Base Class Might Not Be Used.
 5. If A Virtual Function Is Defined In Base Class, There Is No Necessity Of Redefining It In Derived Class
*/