#include<stdio.h>
int main()
{
char ch;
printf("Enter a character : ");
scanf("%c",&ch);
if (ch>=97 && ch<=122) {
ch=ch-32;
printf("The uppercase Character is %c",ch);
}
else printf("You doesn't Enter smallcase Character ");
return 0;
}