//Write a program to find Polar coordinate of cartecain coordinate taking input from user.
#include <stdio.h>
#include<math.h>
int main()
{
float x,y,r,theta;
printf("Enter cartecian x cordinate :");
scanf("%f",&x);
printf("Enter cartecian y cordinate :");
scanf("%f",&y);
r=sqrt(x*x+y*y);
theta=atan(y/x);
theta=theta*(180/3.1415);
printf("The polar cordinates are (r,Theta) : (%f,%f)",r,theta);
return 0;
}