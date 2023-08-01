#include<stdio.h>
int main()
{
int i=1,n=1;
while(i<=300)
{
for(n=2;n<i;n++)
{
if(i%n==0) break;
}
if(i==n) printf("%d\t",i);
i++;
}
return 0;
}