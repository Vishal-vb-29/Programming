#include<stdio.h>
int main()
{
int r,i,j,k;
printf("Enter no. of rows:");
scanf("%d",&r);
for(i=0;i<=r;i++)
{
for(j=0;j<=r-i;j++) printf(" ");
for(k=0;k<=r;k++) printf("*");
printf("\n");

}




return 0;
}