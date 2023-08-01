//Write a program to check the given coordinates lies on which axis
#include<stdio.h>
int main()
{
int x,y;
printf("Enter the coordinate of point (x,y) :");
scanf("%d%d",&x,&y);
if(x==0 && y!=0) printf("Point (%d,%d) lies on the y axis",x,y);
else if(x!=0 && y==0) printf("Point (%d,%d) lies on the x axis",x,y);
else if(x==0 && y==0) printf("Point (%d,%d) lies on the origin ",x,y);
else printf("Point (%d,%d) lies on the quadrant (II,III,IV)",x,y);
return 0;
}