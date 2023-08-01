#include<stdio.h>
int main()
{
int side1,side2,side3;
printf("Enter a 1st side of triangle : ");
scanf("%d",&side1);
printf("Enter a 2nd side of triangle : ");
scanf("%d",&side2);
printf("Enter a 3rd side of triangle : ");
scanf("%d",&side3);
if((side1+side2>side3) || (side1+side3>side2) || (side2+side3>side1)) printf("The triangle is valid");
else printf("The triangle is not valid");
return 0;
}