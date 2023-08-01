#include <stdio.h>

int main(){
int num,sume=0,dig,i,sumo=0;
printf("Enter a number \n");
scanf("%d",&num);
while(num)
{
dig=num%10;
num=num/10;
if (dig%2==0)
sume=sume+dig;
else
sumo=sumo+dig;

}
printf("The sum of even is : %d sum of odd is %d",sume,sumo);
return 0;
}