#include<stdio.h>
int main()
{
int num,rem;
printf("Enter number : ");
scanf("%d",&num);
while(num)
{
rem=num%10;
num=num/10;
printf("%d\n",rem);
}

return 0; 
}