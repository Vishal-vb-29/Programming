#include<stdio.h>

int main()
{
int num;
printf("Enter number : ");
scanf("%d",&num);
if (num%2==0) printf("The number %d is even number",num);
else printf("The number %d is odd number",num);
return 0;
}