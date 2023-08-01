#include<stdio.h>
void star_1()    //halfpyramid
{
int i,j;  
for(i=0;i<=5;i++) 
{
for(j=0;j<=i;j++)
{
printf("*");
}
printf("\n");
    
}
}

void star_2()   //halfdownpyramid
{
int i,j;
for(i=0;i<=5;i++) 
{
for(j=5;j>=i;j--)
{
printf("*");
}
printf("\n");
}
}

int main()
{
int ch;
printf("Enter your choice :");
scanf("%d",&ch);
switch(ch)
{
case 1:
	star_1();
	break;
case 2:
	star_2();
	break;
}
return 0;
}