#include<stdio.h>
int main()
{
int l,b,ar,pm;
printf("Enter the Length of a rectangle:");
scanf("%d",&l);
printf("Enter the breadth of rectangle :");
scanf("%d",&b);
ar=l*b;
pm=2*(l+b);
if (ar>pm) printf("Area of Rectangle is greater than its perimeter : Area=%d & Perimeter=%d",ar,pm);
else printf("Area of Rectangle is lesser than its perimeter : Area=%d & Perimeter=%d",ar,pm);
return 0;
}