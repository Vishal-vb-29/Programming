#include<stdio.h>
int main()
{
int rs,n100,n50,n10,n5,n2,n1,non;
printf("Enter amount (In Rupees):");
scanf("%d",&rs);
n100=rs/100;
rs=rs%100;
n50=rs/50;
rs=rs%50;
n10=rs/10;
rs=rs%10;
n5=rs/5;
rs=rs%5;
n2=rs/2;
rs=rs%2;
n1=rs/1;
rs=rs%1;
non=n1+n2+n5+n10+n50+n100;
printf("Smallest no of notes=%d",non);
return 0;
}