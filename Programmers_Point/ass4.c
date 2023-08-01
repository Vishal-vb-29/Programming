#include<stdio.h>
int main()
{
int sub1,sub2,sub3,per,tot;
printf("Enter marks of 1st sub : ");
scanf("%d",&sub1);
printf("Enter marks of 2nd sub : ");
scanf("%d",&sub2);
printf("Enter marks of 3rd sub : ");
scanf("%d",&sub3);
tot=sub1+sub2+sub3;
printf("The total marks : %d\n",tot);
per=(tot/3);
printf("The percentage is : %d\n",per);
return 0;
}