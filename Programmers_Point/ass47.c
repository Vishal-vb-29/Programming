#include<stdio.h>
int main()
{
int n,v,w,j,k,l,num,i=0;
printf("Enter a number : ");
scanf("%d",&num);
while(num)
{
num=num/10;
i++;
}
for( j=1;j<=i;j++)
{
for( k=1;k<=i;k++)
{
for(l=1;l<=i;l++)
printf("%d%d%d\t",j,k,l);
}
}
return 0;
}