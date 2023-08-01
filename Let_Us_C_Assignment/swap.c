#include<stdio.h>
int main()
{
int c,d;
printf("Enter no. 1 :");
scanf("%d",&c);
printf("Enter no. 2 :");
scanf("%d",&d);
printf("Before swap : c= %d , d= %d",c,d);
c=c+d;
d=c-d;
c=c-d;
printf("After swap : c= %d , d= %d",c,d);
return 0;
}