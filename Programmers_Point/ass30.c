#include<stdio.h>
int main()
{
char c;
printf("Enter your character : ");
scanf("%c",&c);
if(c>=97&&c<=122) printf("The character %c is lowercase",c);
else printf("The character %c is any special symbol or uppercase ",c);

return 0;
}