#include<stdio.h>
int main(){
int num,large,small,sum,dig;
printf("Enter a number :\n");
scanf("%d",&num);
small=num%10;
large=small;
while(num)
{
dig=num%10;
num=num/10;
if(dig>large)
large=dig;
else if(small>dig)
small=dig;
}
sum=large+small;
printf("The sum of large %d and small %d is : %d",large,small,sum);
return 0;
}
