#include<stdio.h>
int main()
{
int year;
printf("Enter the year :");
scanf("%d",&year);
if(year%4==0) 
{
	if(year%100==0)
	{ 
		if(year%400==0) printf("This %d is a LEAP YEAR",year);
		else printf("This %d is a NOT A LEAP YEAR",year);
	}
	else printf("This %d is a LEAP YEAR",year);
}
else printf("This %d is NOT A LEAP YEAR",year);
return 0;
}
