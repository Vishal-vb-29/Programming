#include<stdio.h>
int main()
{
char ch;
printf("Enter a character :");
scanf("%c",&ch);
((ch>=97 && ch<=122) ? printf("The char %c You entered is Lower case.\n",ch) : printf("The char %c You entered is not a Lower case.\n",ch));
return 0;
}