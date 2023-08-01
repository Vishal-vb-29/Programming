#include<stdio.h>
int main()
{
int num,i=1,sum=0;
printf("Enter any positive number: ");
scanf("%d",&num);
if(num>0){
for(i;i<=num;i++)
sum=sum+i;
}
else printf("You've Entered Invalid input");
printf("The sum of natural number from 0 - %d is : %d",num,sum);
return 0;
}