#include<stdio.h>
int main()
{
int i=1,count=1,n;
printf("Enter no.  :");
scanf("%d",&n);
while(i<=n)
{
int j=1;
while(j<=n)
{
if(count<10)
printf(" %d ",count);
else
printf("%d ",count);
count++;
j++;
}
printf("\n");
i++;
}

return 0;
}