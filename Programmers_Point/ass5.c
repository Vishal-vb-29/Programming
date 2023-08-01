#include<stdio.h>
int main(){
int a,b,c;
printf("Enter 1st no : ");
scanf("%d",&a);
printf("Enter 2nd no : ");
scanf("%d",&b);
printf("Enter 3rd no : ");
scanf("%d",&c);
if(a>b && a>c) printf("%d is greater\n",a);
else if(b>a && b>c) printf("%d is greater\n",b);
else if (c>a && c>b) printf("%d is greater\n",c);
else printf("All are same");
return 0;
}