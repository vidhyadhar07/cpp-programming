//example of encapsulation
#include<iostream>
using namespace std;
class Bank_account{
    private:
    double balance;
    double deposit;
    double total_balance;
    public:
    
 int  getdetails(){
        cout<<"enter initial balance:"<<endl;
        cin>>balance;
        cout<<"enter the deposit:"<<endl;
        cin>>deposit;
        total_balance=balance+deposit;
        return 0;
       
    }
    void showbalance(){
        cout<<"total balance:"<<total_balance<<endl;
    }
};
int main (){
    Bank_account account;
    account.getdetails();
   account.showbalance();
    return 0;    
    }