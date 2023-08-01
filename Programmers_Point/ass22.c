#include<stdio.h>
int main()
{
int num;
printf("Enter your number : ");
scanf("%d",&num);
if (num>0) printf("Your number %d is positive",num);
else if (num<0) printf("Your number %d is negative",num);
else printf("Your number %d is zero",num);
return 0;
}