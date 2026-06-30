#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double num ;
cout << "Enter a number: ";
cin >> num;
 cout << fixed << setprecision(2) << num<<endl;
 cout << scientific << num << endl;
 cout << setw(20) << left << "Left-aligned"<<endl;
 cout << hex << 100<<endl; ;
    return 0;
}