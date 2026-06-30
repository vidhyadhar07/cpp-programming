//adding two complex numbers using friend function
  #include <iostream>
  using namespace std;
  class complex{
    public:
    int real,imaginary;
    void get(){
        cin>>real>>imaginary;
    }
    friend complex add(complex a,complex b);
  };
  complex add(complex a,complex b){
    complex c;
    c.real=a.real+b.real;
    c.imaginary=a.imaginary+b.imaginary;
    return c;
  }
  int main(){
    complex c1,c2,c3;
    cout <<"enter first complex number:";
    c1.get();
    cout<<"enter second complex number:";
    c2.get();
    c3=add(c1,c2); 
    cout <<"sum="<<c3.real<<"+"<<c3.imaginary<<"i";
    return 0;
  }