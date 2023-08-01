#include<stdio.h>
int main()
{
int num,rem;
printf("Enter a number : ");
scanf("%d",&num);
if (num==1) printf("Prime number"      );
else if(num==0) printf("composite number ");
for(int i=2;i<=num-1;i++)
{
rem=num/i;
if(rem==0)
{
printf ("composite number");
break;
}
}
if(rem) printf("Prime number");
return 0;
}