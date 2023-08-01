#include<stdio.h>
int main()
{
int i;
char a[50];
printf("Enter your string : ");
gets(a);
for( i=0;i<50;i++) printf("%c",a[i]);
return 0;
}