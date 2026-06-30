//finding volume using overloading concept
#include<iostream>
using namespace std;
class container{
    public:
    double volume(double side){
        return side*side*side;
    }
    double volume(double radius, double height){
        return 3.14*radius*radius*height;
    }
    double volume(float sphere_radius){
        return (4.0/3.0)*3.14*sphere_radius*sphere_radius*sphere_radius;
    }
};
int main(){
container obj;
   double side,radius,height;
   float sphere_radius;
   cout<<"Enter side of cube:";
   cin>>side;
   cout<<endl<<"The volume of cube is "<<obj.volume(side)<<endl;
   cout<<"Enter radius and height of cyllinder: ";
   cin>>radius>>height;
   cout<<endl<<"The volume of cylinder is "<<obj.volume(radius,height)<<endl;
   cout<<"Enter the radius of sphere:";
   cin>>sphere_radius;
   cout<<"The volume of sphere is "<<obj.volume(sphere_radius)<<endl;
   

return 0;
}
