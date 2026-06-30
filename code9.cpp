#include<iostream>
using namespace std;
class student{
    int roll;
    string name;
    public:
    void getdata();
    void display();
};
void student ::getdata(){
    cout<<"enter roll number:";
    cin>>roll;
    cout<<"enter name:";
    cin>>name;
}
void student ::display(){
    cout<<"roll number:"<<roll<<endl;
    cout<<"name:"<<name<<endl;
}
int main(){
    student S1;
    S1.getdata();
    S1.display();
    return 0;
}
