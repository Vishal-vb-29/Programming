#include<stdio.h>
int main()
{
int num,n,r;
int i=1,octal=0;
printf("Enter the number :");
scanf("%d",&num);
n=num;
while(n!=0)
{
r = n% 8;
n = n / 8;
octal = octal + (r * i);
i = i * 10;
}
printf(" decimal : %d\n Octal : %d",num,octal);
return 0;
}