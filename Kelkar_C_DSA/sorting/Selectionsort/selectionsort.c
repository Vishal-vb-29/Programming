#include<stdio.h>
int main()
{
int x[5],e,f,g,si,y;
for(y=0;y<=4;y++)
{
printf("Enter number :");
scanf("%d",&x[y]);
}
e=0;
while(e<=3)
{
f=e+1;
si=e;
while(f<=4)
{
if(x[f]<x[si]) si=f;
f++;
}
g=x[si];
x[si]=x[e];
x[e]=g;
e++;
}
for(y=0;y<5;y++) printf("%d\t",x[y]);
return 0;
}