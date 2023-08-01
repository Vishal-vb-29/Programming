//Write a program to calculate wind chill factor by taking input from user of air temperature and wind velocity  wcf=35.74+0.6215 t + 0.4275 t-35.75 v^0.16
#include<stdio.h>
#include<math.h>
int main()
{
float t,v,wcf;
printf("Enter air temperature :");
scanf("%f",&t);
printf("Enter wind velocity :");
scanf("%f",&v);
wcf=35.74+0.6215*(t)+(0.4275*t-35.75)*pow(v,0.16);
printf("WInd Chill Factor : %f",wcf);
return 0;
}