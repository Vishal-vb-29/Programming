#include<stdio.h>
int main()
{
int sp,cp,p,l;
printf("Enter cost price :");
scanf("%d",&cp);
printf("Enter selling price :");
scanf("%d",&sp);
p=sp-cp;
l=cp-sp;
if (p>0) printf(" Profit : %d",p);
if (l>0) printf(" Loss : %d",l);
else if (l==0 || p==0) printf("There is no profit or loss it is sold on cost price ");
return 0;
}