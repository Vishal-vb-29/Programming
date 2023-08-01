#include<stdio.h>
int main()
{
int digit,n1,n2,n3,n4,n5,num,rev;
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
rev=n1*10000+n2*1000+n3*100+n4*10+n5;
while(rev)
{
digit=rev%10;
printf("%d \t",digit);
rev=rev/10;
}
return 0;
}