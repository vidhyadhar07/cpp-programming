#include<iostream>
using namespace std;
float ftoc(float f){
return ((f-32)*5/9);
}
float ctof(float c){
return ((c*9/5)+32);
}
int main (){
    int num1,num2;
    cout<<"Enter fahrenhit value: ";
    cin>>num1;
    cout<< endl<<"fahrenhit to centigrade"<<ftoc(num1)<<endl;
    cout<<endl<<"Enter centigrade value: ";
    cin>>num2;
    cout<<"centigrade to fahrenhit"<<ctof(num2)<<endl;

return 0;
}
