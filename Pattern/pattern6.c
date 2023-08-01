#include<stdio.h>
int main()
{
int r,i,j,k;
printf("Enter the no of rows:");
scanf("%d",&r);
for(i=1;i<=r;i++)
{
for(k=1;k<=i;k++) printf(" ");
for(j=2*r-2*i;j>=0;j--) printf("*");
printf("\n");
}
return 0;
}