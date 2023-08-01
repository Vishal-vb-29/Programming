#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter 1st number : ");
scanf("%d",&a);
printf("Enter  2nd number : ");
scanf("%d",&b);
printf("Your number before swap %d %d\n",a,b);
c=a;
a=b;
b=c;
printf("Your number after swap %d %d",a,b);


return 0;
}