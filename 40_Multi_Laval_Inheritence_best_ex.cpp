#include<iostream>
using namespace std;

class student{
    protected:
    int roll;
    string name;
    public:
    void setstud_data(){
        int r;
        string n;
        
        cout<<"enter the roll number of student"<<endl;
        cin>>r;
        roll = r;
        
        cout<<"enter the name of student"<<endl;
        cin.ignore();
        getline(cin,n);
        name = n;
    }   
};
class exam : public student {
    protected:
        int subId[7];
        string subName[7];
        float marks[7];
        int TotalSub;

    public:
        void NoOfSub(int sub){
            TotalSub = sub;
        }
        void setExamData(){
            cout<<"Enter Exam Data For "<<TotalSub<<" Subjects"<<endl;
            cout<<endl;

            for(int i=0;i<TotalSub;i++)
            {
                cout<<"Subject "<<i+1<<" ID : ";
                cin>>subId[i];

                cout<<"Subject Name :";
                cin.ignore();
                getline(cin,subName[i]);

                cout<<"Enter Marks (Out Of 100) For "<< subName[i]<< " Subject : ";
                cin>>marks[i];
                cout<<endl;
            }
        }   
};

class result : public exam{
    public:
    float getTotalMarks(){
        // protected:
        int totalmarks=0;
        for(int i=0;i<TotalSub;i++){
            totalmarks = totalmarks + marks[i];
        }
        return totalmarks;
    }
    float getPerc(){
            return (getTotalMarks()/(TotalSub*100))*100;
    }

    void Display(){
        cout<<endl;
        cout<<"--------------------- Name Of The Student ---------------------"<<endl;
        cout<<"The Roll_No Of The Student is: "<<roll<<endl;
        cout<<"The Name Of The Student is: "<<name<<endl;
        cout<<endl;
    
            cout<<"--------------------- Show Student Marks Details ---------------------"<<endl;
            cout<<endl;
            for(int i=0;i<TotalSub;i++){
                cout<<"Subject Id : "<<subId[i]<<endl;
                cout<<"Subject Name : "<<subName[i]<<endl;
                cout<<"Subject Name : "<<marks[i]<<endl;
                cout<<endl;
            }
            cout<<"Total Marks : "<<getTotalMarks()<<" / "<< TotalSub*100<<endl;
            cout<<"Percentage is : "<<getPerc()<<endl;


        }
    
        

};


// class result : public exam{};

int main(){
    // result raj;
    result student;
    int TotalSub;

    student.setstud_data();  
    cout<<"Enter The No. Of Subjects"<<endl;
    cin>>TotalSub;
    student.NoOfSub(TotalSub);
    student.setExamData();
    student.Display();

}







/* #include<iostream>
using namespace std;

class student{
    protected:
    int roll;
    string name;
    public:
    void setstud_data(){
        int r;
        string n;
        
        cout<<"enter the roll number of student"<<endl;
        cin>>r;
        roll = r;
        
        cout<<"enter the name of student"<<endl;
        cin.ignore();
        getline(cin,n);
        name = n;
    }   
};
class exam : public student {
    protected:
        int subId[7];
        string subName[7];
        float marks[7];
        int TotalSub;

    public:
        void NoOfSub(int sub){
            TotalSub = sub;
        }
        void setExamData(){
            cout<<"Enter Exam Data For "<<TotalSub<<" Subjects"<<endl;
            cout<<endl;

            for(int i=0;i<TotalSub;i++)
            {
                cout<<"Subject "<<i+1<<" ID : ";
                cin>>subId[i];

                cout<<"Subject Name :";
                cin.ignore();
                getline(cin,subName[i]);

                cout<<"Enter Marks (Out Of 100) For "<< subName[i]<< " Subject : ";
                cin>>marks[i];
                cout<<endl;
            }
        }   
};

class result : public exam{
    public:
    float getTotalMarks(){
        // protected:
        int totalmarks=0;
        for(int i=0;i<TotalSub;i++){
            totalmarks = totalmarks + marks[i];
        }
        return totalmarks;
    }
    float getPerc(){
            return (getTotalMarks()/(TotalSub*100))*100;
    }

    void Stud_display(){
        cout<<endl;
        cout<<"--------------------- Name Of The Student ---------------------"<<endl;
        cout<<"The Roll_No Of The Student is: "<<roll<<endl;
        cout<<"The Name Of The Student is: "<<name<<endl;
        cout<<endl;
    } 

    void SubjectDisplay(){
            cout<<"--------------------- Show Student Marks Details ---------------------"<<endl;
            cout<<endl;
            for(int i=0;i<TotalSub;i++){
                cout<<"Subject Id : "<<subId[i]<<endl;
                cout<<"Subject Name : "<<subName[i]<<endl;
                cout<<"Subject Name : "<<marks[i]<<endl;
                cout<<endl;
            }
            cout<<"Total Marks : "<<getTotalMarks()<<" / "<< TotalSub*100<<endl;
            cout<<"Percentage is : "<<getPerc()<<endl;


        }
    
        

};


// class result : public exam{};

int main(){
    // result raj;
    result student;
    int TotalSub;

    student.setstud_data();
    student.Stud_display();  
    cout<<"Enter The No. Of Subjects"<<endl;
    cin>>TotalSub;
    student.NoOfSub(TotalSub);
    student.setExamData();
    student.SubjectDisplay();

}

*/
