#include<stdio.h>
int main()
{
int digit,n1,n2,n3,n4,n5,num,sod;
printf("Enter a digit:");
scanf("%d",&digit);
num=digit;
n1=num%10;
num=num/10;
n2=num%10;
num=num/10;
n3=num%10;
num=num/10;
n4=num%10;
num=num/10;
n5=num%10;
num=num/10;
sod=n1+n2+n3+n4+n5;
printf("Sum of digit is : %d",sod);
return 0;
}