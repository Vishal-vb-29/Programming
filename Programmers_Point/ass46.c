#include<stdio.h>
int main()
{
int num,rem,quo,div;
printf("Enter a number : ");
scanf("%d",&num);
printf("Enter a divisor : ");
scanf("%d",&div);
quo=num/div;
rem=num-quo*div;
printf("The remainder is : %d",rem);
return 0;
}