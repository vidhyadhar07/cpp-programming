

#include<iostream>
using namespace std;
 class student
 {
    private :
    int roll;
    string name;
    public:
    void setdata(int r,string n){
        roll =r;
        name=n;
    }
    void display(){
        cout<<"roll number:"<<roll<<endl;
        cout<<"name:"<<name<<endl;
    }
 };
 int main(){
    student s1;
    s1.setdata(8865,"vidhyadhar");
    s1.display();
    return 0;
 }
