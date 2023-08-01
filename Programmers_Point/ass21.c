#include<stdio.h>
int main()
{
float fer,cel;
printf("Enter temperature in fahrenheit : ");
scanf("%f",&fer);
cel=(fer-32.0)*(5.0/9.0);
printf("The temperature in celcius is : %f",cel);
return 0;
}