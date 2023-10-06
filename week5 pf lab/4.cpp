#include<iostream>
#include<cmath>
using namespace std;
void findheight(float base, float angle);
main()
{
float base,angle;
cout <<"Enter the distance from the base of the tree (in feet): ";
cin >>base;
cout <<"Enter the angle of elevation (in degrees): ";
cin>>angle;
findheight(base, angle);
}

void findheight(float base , float angle)
{
float radians, height;
radians=angle/57.2958;
height=tan(radians)*base;
cout <<"The height of the tree is: "<<height<<" feet";

 
}
