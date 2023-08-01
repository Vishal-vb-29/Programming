//wap to print uppr half ,lower half and diagonal of the 2d array
#include<stdio.h>
void main (){
int a[5][5] ,i , j;
printf("enter a 2D array or matrix\n");
for(i=0;i<=4;i++)//for row
{
for(j=0;j<=4;j++)//for col
{
scanf("%d",&a[i][j]);
}
}
printf("the matrix is \n");
for(i=0;i<=4;i++)//for row
{
for(j=0;j<=4;j++)//for col
{
if(i==j)//for lower triangle i<=j and for diagonal i==j uppr triangle i<=j
{
printf(" %d ",a[i][j]); 
}
else
{
printf("   ");
}
}
printf("\n");
}
}