#include<iostream>
using namespace std;
int GCD (int a,int b){
    while (b!=0){
        int temp=b;
        b=a%b;
        a=temp;

    }
    return a;
}
int main (){
    int x=12;
    int y=18;
    cout<<"GCD is "<<GCD(x,y);

return 0;
}
