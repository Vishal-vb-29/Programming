#include<stdio.h>
int main()
{
int n;
printf("Enter an integer :");
scanf("%d",&n);
if (n==0) printf("The integer %d is neither odd nor even",n);
else if (n%2!=0) printf("The integer %d is odd",n);
else if (n%2==0) printf("The integer %d is even",n);
return 0;
}