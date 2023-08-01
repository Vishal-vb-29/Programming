#include<stdio.h>
int main()
{
int i,j,r,k;
printf("Enter no. of rows :");
scanf("%d",&r);
for (i=0; i<r; i++)
{
for(k = 0; k<i; k++ ) printf(" ");
for(j = 0; j < r-i; j++ ) printf("*"); 
printf("\n");
}
return 0;
}