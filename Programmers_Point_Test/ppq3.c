#include<stdio.h>
int main()
{
int num,fact=1;
printf("Enter your number : ");
scanf("%d",&num);
while(num)
{
fact=fact*num;
num=num-1;
}
printf("Factorial of your no is : %d",fact);
return 0;
}