#include<stdio.h>
int main()
{
int year;
printf("Enter thr year :");
scanf("%d",&year);
if (year%400==0 || year%100==0 && year%4==0) printf("The %d year is a LEAP YEAR\n",year);
else printf("The %d year is NOT A LEAP YEAR\n",year);
return 0;
}