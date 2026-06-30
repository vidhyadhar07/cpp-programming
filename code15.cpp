//finding volume of block using constructor
#include<iostream>
using namespace std;
class Box{
    int length,width,height;
    int volume;
    public:
    Box(int l,int w,int h)   //constructor
    {
        length=l;
        width=w;
        height=h;
        volume=length*width*height;
    }
    void display(){
        cout<<"Volume of the box is:"<<volume;
    }
};
int main(){
    int l,w,h;
    cout<<"Enter lenght,width and heigth:";
    cin>>l>>w>>h;
    Box b1(l,w,h);
    b1.display();
    return 0; 
}