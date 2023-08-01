#include<stdio.h>
int main()
{
int num,count=0,digit;
printf("Enter your number : ");
scanf("%d",&num);
while(num)
{
digit=num%10;
num=num/10;
if (digit%2==0) count++ ;
}
printf("The no of even digits in your number is : %d",count);
return 0;
}