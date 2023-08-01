//WAP to enter numbers till the user wants.At the end it should display the count of positive ,negative and zeros entered.?
#include<stdio.h>
int main()
{
char ch='Y';
int num,positive=0,negative=0,zeroes=0,other=0;
while(ch=='Y' || ch=='y')
{
printf("\nEnter no.:");
scanf("%d",&num);
fflush(stdin);
if (num>0) positive++;
else if (num==0) zeroes++;
else if (num<0) negative++;
else other++;
printf("\nWant to enter a number again (Y/N):");
scanf("%s",&ch);
fflush(stdin);
if (ch=='N' || ch=='n')
{
printf(" Positive : %d\n Negative : %d\n zeroes : %d\n other : %d\n",positive,negative,zeroes,other);
break;
}
}
return 0;
}