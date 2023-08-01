#include<stdio.h>
int main()
{
int num,num1,dig,arm=0;
printf("Enter your number : ");
scanf("%d",&num);
num1=num;
while(num1)
{
dig=num1%10;
num1=num1/10;
if(dig)
arm=arm+dig*dig*dig;

}
if (arm==num) printf("%d is a armstrong number",num);
else printf("%d is not an armstrong number",num);
return 0;
}