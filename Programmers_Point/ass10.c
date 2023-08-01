#include<stdio.h>
int main()
{
int num,d1,d2,d3,sum;
printf("Enter three digit number :");
scanf("%d",&num);
d1=num%10;
num=num/10;
d2=num%10;
num=num/10;
d3=num%10;
num=num/10;
sum=d1+d2+d3;
printf("The sum of three digits is: %d",sum);
return 0;
}