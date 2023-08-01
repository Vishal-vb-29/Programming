#include<stdio.h>
int main()
{
int hrs,i=1;
float otpay;
while(i<=10)
{
printf("Enter no. of hours employee worked : ");
scanf("%d",&hrs);
if (hrs>40) otpay=(hrs-40)*12;
else otpay=0;
printf("Hours : %d\n overtime pay : %f\n",hrs,otpay);
i++;
}
return 0;
}