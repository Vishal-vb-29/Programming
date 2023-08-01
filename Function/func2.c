#include<stdio.h>
int fact(int);
int main()
{
int num,c;
printf("Enter a number : ");
scanf("%d",&num);
c=fact(num);
printf("The factorial of %d is : %d",num,c);
return 0;
}
int fact( int a)
{

if (a==1) return 1;
else return a*fact(a-1);


}