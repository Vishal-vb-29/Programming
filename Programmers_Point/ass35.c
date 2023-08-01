#include<stdio.h>
int main()
{
char ch;
printf("Enter a Uppercase Character : ");
scanf("%c",&ch);
if (ch>=65 && ch<=92) {
ch=ch+32;
printf("The Lowercase character is %c",ch);
}
else printf("You doesn't enter a uppercase character");
return 0;
}