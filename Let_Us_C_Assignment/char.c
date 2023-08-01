#include<stdio.h>
int main()
{
    char ch;
    int i;
    printf("Enter one char:");
    scanf("%c",&ch);
    if (ch>=0 && ch<=47 || ch>=58 && ch<=64 || ch>=91 && ch<=96 || ch>=123 && ch<=255 ) i=0;
    else if (ch>=48 && ch<=57) i=1;
    else if (ch>=65 && ch<=90) i=2;
    else if (ch>=97 && ch<=122) i=3;
    switch (i)
    {
        case 0:
        printf("The entered character %c is a SPECIAL SYMBOL CHARACTER\n",ch);
        break;
        case 1:
        printf("The entered character %c is a DIGIT CHARACTER\n",ch);
        break;
        case 2:
        printf("The entered character %c is a  UPPERCASE ALPHABATE CHARACTER\n",ch);
        break;
        case 3:
        printf("The entered character %c is a LOWERCASE ALPHABATE CHARACTER\n",ch);
    }
    return 0;
}