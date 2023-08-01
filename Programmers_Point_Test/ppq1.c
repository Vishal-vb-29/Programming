#include<Stdio.h>
int main(){
int num,small,large=0,digit,sum;
printf("Enter your number: ");
scanf("%d",&num);
small = num%10;
while(num)
{
digit=num%10;
num=num/10;
if(digit>large) large=digit;
else if(digit<small) small=digit;
}
sum=large+small;
printf("Sum of large and small is : %d",sum);
return 0;
}