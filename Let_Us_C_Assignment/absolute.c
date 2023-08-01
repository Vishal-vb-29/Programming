//Write a program to print actual value of a given number from user
#include<stdio.h>
int main()
{
int num;
printf("Enter a number :");
scanf("%d",&num);
if (num<0) printf("The absolute value of a number is : %d",(-1)*num);
else if(num>=0) printf("The absolute value of any positive number is itself : %d",num);
return 0;
}