#include<stdio.h>
int main()
{
int x1, x2,x3,y1,y2,y3,ar;
printf("Enter first coordinate points (x1,y1) :");
scanf("%d%d",&x1,&y1);
printf("Enter first coordinate points (x2,y2) :");
scanf("%d%d",&x2,&y2);
printf("Enter first coordinate points (x3,y3) :");
scanf("%d%d",&x3,&y3);
ar=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
if (ar==0) printf("The three points lies on a straight line");
else printf("The three points doesnt lie on a straight line");
return 0;
}