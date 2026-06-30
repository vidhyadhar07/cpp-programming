#include <iostream>
using namespace std;
inline int multiply(int a,int b){    //inline function is used to redusce compilation time
return a*b;
}
inline int cube(int x){
return x*x*x;
}
int main(){
int num1=4,num2=5,num3=6;
cout<<"multiplication value:"<<multiply(num1,num2)<<endl;
cout<<"cube on number:"<<cube(num3);
return 0;
}

