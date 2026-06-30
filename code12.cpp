//take and print student details
#include <iostream>
using namespace std;
class student{
    int roll;
    string name;
    public:
    void read(){

        cout<<"enter roll number:";
        cin>>roll;
        cout<<"enter name:";
        cin>>name;
    }
    void print(){
        cout <<"roll number:"<<roll<<endl;
        cout<<"name:"<<name<<endl;
    }
};
int main (){
    student obj;
    obj.read();
    obj.print();
    return 0;
}