#include<stdio.h>
int main()
{
int i=0,j,k,r;
printf("Enter no. of rows you want:");
scanf("%d",&r);
for (i=0; i<r; i++)
{
for(k = r; k > i+1; k-- ) printf(" ");
for(j = 0; j <=2*i; j++) 
{
printf("*");
}
printf("\n");
}
if (i==r)
{
printf("");
for(i=1;i<=r;i++)
{
for(k=1;k<=i;k++) printf(" ");
for(j=2*(r-i-1);j>=0;j--) printf("*");
printf("\n");
}




}





return 0;
}