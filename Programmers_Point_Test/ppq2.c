#include<stdio.h>
int main(){
int num,digit,sum=0;
printf("Enter your number : ");
scanf("%d",&num);
while(num)
{
digit=num%10;
num=num/10;
if(digit%4==0 || digit%8==0) sum=sum+digit;
}
printf("The sum you want : %d",sum);
return 0;
}