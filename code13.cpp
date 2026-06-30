// find out the prime number
#include<iostream>
using namespace std;
class prime{
int num;
public:
void get_num(){
    cout<<"enter a number:";
    cin>>num;
}
void check_prime(){
    int count=0;
    for(int i=1;i<=num;i++){
        if(num%i==0)
        count++;
    }
    if(count==2)
    cout<<"The number is prime";
    else
    cout<<"The number is not a prime number";
}
};
int main(){
    prime obj;
    obj.get_num();
    obj.check_prime();
    return 0; 
}