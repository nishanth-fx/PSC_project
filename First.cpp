#include<iostream>
#include<cmath>
#define pi 3.14
using namespace std;
double calc_area_circle(double radius){
    return pi*radius*radius;
}
void area_circle(){
    double radius{};
    cout<<"\nEnter the radius of the circle:";
    cin>>radius;
    cout<<"\nThe area of the circle of radius "<< radius <<" is "<< calc_area_circle(radius)<<endl;

}
double calc_volume_cone (double radius,double height){
    return pi*radius*radius*height;
}
void volume_cone(){
    double height{};
    double radius{};
    cout<<"\nEnter the radius : ";
    cin>>radius;
    cout<<"Enter the Height : ";
    cin>>height;
    cout<<"\nThe volume of the cone of radius "<< radius << "and height " << height <<" is "<< calc_volume_cone(radius,height);

}
int main(){
    area_circle();
    volume_cone();
    return 0;
}