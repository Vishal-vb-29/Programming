#include<stdio.h>
int main()
{
char ch;
printf("Enter any character : ");
scanf("%c",&ch);
if((ch>=48 && ch<=57) || (ch>=65 && ch<=90) || (ch>=90 && ch<=122)) printf("The %c is not a special symbol " , ch);
else printf("The %c is special-symbol",ch);
return 0;
}