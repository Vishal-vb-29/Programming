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
if(per>=80) printf("Grade : 'A' remark : Excellent\n");
else if(per>=70) printf("Grade : 'B' remark : very Good\n");
else if(per>=60) printf("Grade : 'C' remark : Good\n");
else if(per>=50) printf("Grade : 'D' remark : Satisfactory\n");
else printf("Grade : 'E' remark : Failure Try Again...\n");
return 0;
}