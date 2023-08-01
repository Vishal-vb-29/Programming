#include<stdio.h>
int main()
{
int num1,num2;
printf("Enter 1st number : ");
scanf("%d",&num1);
printf("Enter 2nd number : ");
scanf("%d",&num2);
if(num1<num2) printf("%d is minimum ",num1);
else if(num2<num1) printf("%d is minimum",num2);
else printf("Both are same");
return 0;
}