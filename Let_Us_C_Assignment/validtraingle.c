//Write a program to check whether a given traingle is valid or not.
#include<stdio.h>
int main()
{
int s1,s2,s3,lrg,sum;
printf("Enter the three sides of triangle s1,s2,s3 :");
scanf("%d%d%d",&s1,&s2,&s3);
if (s1>s2 && s1>s3) 
{
sum=s2+s3;
lrg=s1;
}
else if(s2>s1 && s2>s3)
{
sum=s1+s2;
lrg=s2;
}
else 
{
sum=s2+s1;
lrg=s3;
}
if (sum>lrg)
{
printf("Traingle is valid");
}
else printf("The traingle is not valid");
return 0;
}