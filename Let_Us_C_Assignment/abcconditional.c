//write a program to check biggest numbear between three number using conditional operators.
#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter three no. (a,b,c) : ");
scanf("%d%d%d",&a,&b,&c);
((a>b && a>c )? printf("%d is greater \n",a):((b>a && b>c)? printf("%d is greater\n",b): printf("%d is greater\n",c)));
return 0;
}