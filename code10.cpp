#include<iostream>
using namespace std;
class demo{
    privite:
    int a;
    protected: int b;
    public: int c;
    void getdata(){
        a=10;
        b=20;
        c=30;
    }
    void display(){
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
        cout<<"c="<<c<<endl;
    }
};
class Child:public demo{
    public:
    void access(){
        a=10;
        b=20;
        c=30;
    }
};
int main(){
    demo obj;
    obj.getdata();
    obj.display();
    obj
}