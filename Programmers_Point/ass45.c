#include<stdio.h>
int main()
{
int num,rem,quo,div;
printf("Enter a number : ");
scanf("%d",&num);
printf("Enter a divisor : ");
scanf("%d",&div);
rem=num%div;
quo=(num-rem)/div;
printf("The quotient is : %d",quo);
return 0;
}