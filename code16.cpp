//code on concet of distructor
#include <iostream>
using namespace std;
class demo {
    public:
    demo ()    //constructor
    {
        cout<<"Constructor is called"<<endl;
    }
    ~demo()    //distructor
    {
        cout<<"Distructor is called"<<endl;
    }
};
int main(){
    demo D1;   //D1 is object
    cout<<"Inside main function"<<endl;
    return 0;
}
