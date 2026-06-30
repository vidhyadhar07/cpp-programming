#include<iostream>
using namespace std;
class random{
     public:
    int real,imaginary;
 void get(){
    cin>>real>>imaginary;
    }
   friend random sum(random c,random d);
 
 };
random sum(random c,random d){
    random resultant;
    resultant.real=c.real+d.real;
    resultant.imaginary=c.imaginary+d.imaginary;
    return resultant;
}
int main (){
 random r1,r2,r3;
    cout<<"enter first complex number:";
    r1.get ();
    cout <<"enter second complex number:";
    r2.get();
    r3=sum(r1,r2);
    cout<<"sum="<<r3.real<<"+"<<r3.imaginary<<"i";
    return 0;
}
