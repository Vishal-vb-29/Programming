#include<stdio.h>
int main()
{
int i,j,k,r;
printf("Enter no of rows:");
scanf("%d",&r);
for(i=0;i<r/2;i++)
{
for(j=r/2;j>=0+i;j--) printf(" ");
for(k=0;k<i;k++) printf("*");
printf("\n");
}
if(i==r/2){
for(i=1;i<=(r/2);i++)
{
for(j=0;j<i;j++) printf(" ");
for(k=(r/2)-i;k>=0;k--) printf("*");
printf("\n");
}
}
return 0;
}