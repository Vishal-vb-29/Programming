#include<stdio.h>
int main()
{
char c;
printf("Enter your character : ");
scanf("%c",&c);
if (c>=65 && c<=90) printf("The character %c is an uppercase",c);
else if(c>=97&&c<=122) printf("The character %c is lowercase",c);
else printf("The character %c is any special symbol",c);

return 0;
}