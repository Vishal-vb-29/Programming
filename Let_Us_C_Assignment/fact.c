#include<stdio.h>
int main()
{
int num,fact,i;
printf("Enter the number : ");
scanf("%d",&num);
i=num;
fact=1;
while(i>0)
{
fact=fact*(i);
i--;
}
printf("The factorial of %d : %d\n",num,fact);
return 0;
}