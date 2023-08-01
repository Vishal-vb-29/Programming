#include<stdio.h>
int main(){
int num,sume=0,sumo=0,digit;
printf("Enter your no. : ");
scanf("%d",&num);
while(num)
{
digit=num%10;
num=num/10;
if(digit%2==0) sume=sume+digit;
else sumo=sumo+digit;
}
printf("The sum of even digits is : %d\n",sume);
printf("The sum of odd digtis is : %d\n",sumo);
return 0;
}