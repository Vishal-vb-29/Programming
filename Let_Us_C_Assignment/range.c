// WAP to find a range of a set of numbers entered through the keyboard. Range is the diiference between the smallest and biggest number in it.
#include<stdio.h>
int main()
{
int num,small,big,set,range;
printf("Enter the no of elements you want to enter in Set :");
scanf("%d",&set);
printf("Enter number :");
scanf("%d",&num);
set--;
small=num;
big=num;
while(set)
{
printf("Enter number :");
scanf("%d",&num);
if(num<small) small=num;
else if(num>big) big=num;
set--;
}
range=big-small;
printf("The range of set of Number is %d ",range);
return 0;
}