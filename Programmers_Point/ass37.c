#include<stdio.h>
int main()
{
char ch,c;
printf("Enter a character : ");
scanf("%c",&ch);
c=ch;
if((ch>=97 && ch<=122) || (ch>=65 &&ch<=92))
{
if (ch>=97 && ch<=122) ch=ch-32;
if (ch==65 || ch==69 ||ch==73 || ch==79 || ch==85) printf("The character %c is vowel",c);
else printf("The character %c is consonant",c);
}
return 0;
}