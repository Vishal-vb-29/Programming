#include<stdio.H>
int main()
{
int a,b;
printf("Enter 1st number : ");
scanf("%d",&a);
printf("Enter 2nd number : ");
scanf("%d",&b);
printf("Your number before swap %d %d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("Your number after swap %d %d",a,b);

return 0;
}