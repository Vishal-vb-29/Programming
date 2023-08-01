#include<stdio.h>
int main()
{
int year;
printf("Enter year : ");
scanf("%d",&year);
if (year%4==0){
if (year%100==0){
if (year%400==0) printf("The %d is a leap year",year);
else printf("The %d is not a leap year",year);
}
else printf("The %d is a leap year",year);
}
else ("The %d is not a leap year",year);
return 0;
}