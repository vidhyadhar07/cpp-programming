// enter the details of patient using child class object
#include<iostream>
using namespace std;
class patient{
    protected:
    int ID;
    string name;
    int age;
    public:
    void getpatient(){
        cout<<"Enter patient ID:";
        cin>>ID;
        cout<<"Enter patient name:";
        cin>>name;
        cout<<"Enter patient age:";
        cin>>age;
    }
};
class details :public patient{
    string disease;
    public:
    void getdetails(){
        cout<<"enter disease:";
        cin>>disease;
    }
    void display(){
        cout<<"\nPatient Details\n";
        cout<<"Patient ID:"<<ID<<endl;
        cout<<"Patient name:"<<name<<endl;
        cout<<"Patient age:"<<age<<endl;
        cout<<"Disease:"<<disease<<endl;
    }
};
int main(){
    details P1;
    P1.getpatient();
    P1.getdetails();
    P1.display();
    return 0;

}