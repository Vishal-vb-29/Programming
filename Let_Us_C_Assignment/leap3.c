#include<stdio.h>
int main()
{
int year;
printf("Enter Year :");
scanf("%d",&year);
((year%4==0 && year%100!=0)? printf("%d is a LEAP YEAR\n",year) : (year%400==0 ? printf("%d is a LEAP YEAR\n",year) : printf("%d is a COMMON YEAR\n",year)));
return 0;
}