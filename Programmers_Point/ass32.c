
#include<stdio.h>
int main()
{
int i=0;
char ch[5];
printf("Enter a group of 5 character :");
scanf("%s",ch);
printf("The string is %s\n",ch);
while(i<5)
{
if(ch[i]>=60 && ch[i]<=92) printf("%c is Uppercase Alphabate\n",ch[i]);
else if(ch[i]>=97 && ch[i]<=122) printf("%c is Lowercase Alphabate\n",ch[i]);
else if (ch[i]>=48 && ch[i]<=57) printf("%c is digit\n",ch[i]);
else printf("%c is a Special Character\n",ch[i]);
i++;
}


return 0;
}