#include<stdio.h>
int main()
{
int i,j,a,n=5;
for(i=0;i<=n;i++)
{
for(j=0;j<=i;j++) 
{
a=i+j+1;
printf("%d",a);
}
printf("\n");

}



return 0;
}