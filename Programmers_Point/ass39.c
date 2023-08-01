#include<stdio.h>
int main()
{
int num,i=1;
printf("Enter a positive number : ");
scanf("%d",&num);
if(num>0){
for(i;i<=num;i++) printf("%d\t",i);
}
else printf("Invalid Number");
return 0;
}