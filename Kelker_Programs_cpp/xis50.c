#include<stdio.h>
int main()
{
int x;
printf("Enter a number :");
scanf("%d",&x);
if(x<50) printf("less than 50");
if(x>50) printf("greater than 50");
else printf("Eual to fifty");
return 0;
}