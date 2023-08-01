#include<stdio.h>
#include<math.h>
int main()
{
int x,y,pc,r,x1,y1;
printf("Enter the center coordinate of circle (x,y):");
scanf("%d%d",&x,&y);
printf("Enter the radius of the circle :");
scanf("%d",&r);
printf("Enter the coordinates of point (x1,y1):");
scanf("%d%d",&x1,&y1);
pc=sqrt(pow(x1-x,2)+pow(y1-y,2));
if (pc>r) printf("Point (%d,%d) lies outside the circle",x1,y1);
else if (pc<r) printf("Point (%d,%d) lies inside the circle",x1,y1);
else if (pc==r) printf("Point (%d,%d) lies centre of the circle",x1,y1);
else printf("Wrong Entry");
return 0;
}