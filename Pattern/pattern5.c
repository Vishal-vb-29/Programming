#include<stdio.h>
int main()
{
int i,j,r,k;
printf("Enter no. of rows :");
scanf("%d",&r);
for (i=0; i<r; i++)
{
for(k = r; k > i+1; k-- ) printf(" ");
for(j = 0; j <=2*i; j++) 
{
printf("*");
if(i==0) break; 
}
printf("\n");
}
return 0;
}