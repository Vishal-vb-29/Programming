#include<stdio.h>
void bubblesort(int *x,int size)
{
int y,m,e,f,g;
m=size-2;
while(m>=0)
{
e=0;
f=1;
while(e<=m)
{
if(x[f]<x[e])
{
g=x[e];
x[e]=x[f];
x[f]=g;
}
/*if(x[f]<x[e])  pointer case
{
g=*(x+e);
*(x+e)=*(x+f);
*(x+f)=g;
}*/
e++;
f++;
}
m--;
}
}
int main()
{
int x[5];
int y;
for(y=0;y<=4;y++)
{
printf("Enter a number :");
scanf("%d",&x[y]);
}
bubblesort(x,5);
for(y=0;y<=4;y++)
{
printf("%d\n",x[y]);
}
return 0;
}