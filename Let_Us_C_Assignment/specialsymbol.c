#include<stdio.h>
int main()
{
char ch;
printf("Enter a character :");
scanf("%c",&ch);
((ch>=0 && ch<=47 || ch>=58 && ch<=64 || ch>=91 && ch<=96 || ch>=123 && ch<=255) ? printf("The char %c You entered is special symbol.\n",ch) : printf("The char %c You entered is not a special symbol.\n",ch));
return 0;
}