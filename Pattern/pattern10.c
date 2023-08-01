#include<stdio.h>
int main()
{
int r,j,i,k;
printf("Enter no of rows :");
scanf("%d",&r);
for(i=0;i<r;i++)
{
for(j=0;j<=i;j++) printf("*");
printf("\n");
}
if(i==r)
{

for(i=0;i<=r;i++)
{
for(j=r-i;j>=0;j--) printf("*");
printf("\n");
}
}
return 0;
}