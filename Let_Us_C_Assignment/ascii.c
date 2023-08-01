//Write a program to print ascii chart
#include<stdio.h>
int main()
{
char ch=0;
int i=0;
while(i<=255)
{
printf("%c  ",ch);
ch++;
i++;
}
return 0;
}