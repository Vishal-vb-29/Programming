#include<stdio.h>
int main(){
int i;
printf("Enter a number [0-6] : ");
scanf("%d",&i);

switch(i)
{
case 0:
printf("Sunday");
break;
case 1:
printf("Monday");
break;
case 2:
printf("Tuesday");
break;
case 3:
printf("Wednesday");
break;
case 4:
printf("Thursday");
break;
case 5:
printf("Friday");
break;
case 6:
printf("Saturday");
break;
default:
printf("Invalid number");
}
return 0;
}