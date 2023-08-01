#include<stdio.h>
int main()
{
int b,i=1;
float a,power;
printf("enter teo numbers a & b :");
scanf("%f%d",&a,&b);
power=1;
while(i<=b)
{
power=power*a;
i++;
}
printf("%f of the power %d is %f\n",a,b,power);
return 0;
}