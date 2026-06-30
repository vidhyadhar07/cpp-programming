#include<iostream>
using namespace std;
float circle_area(float r){
return 3.14*r*r;
}
float triangle_area(float b,float h){
return 0.5*b*h;
}
float rectangle_area(float l,float w){
return l*w;
}
int main (){
    cout <<"Area of circle:"<<circle_area(5)<<endl;
    cout<<"Area of triangle:"<<triangle_area(4,6)<<endl;
    cout<<"Area of rectangle:"<<rectangle_area(5,7)<<endl;
return 0;
}
