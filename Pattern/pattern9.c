#include<stdio.h>
int main()
{
int j,i,k,r;
printf("Enter no of rows:");
scanf("%d",&r);
for(i=0;i<=r;i++)
{
for(j=0;j<=i;j++) printf(" ");
for(k=0;k<=r;k++) printf("*");
printf("\n");
}
return 0;
}