#include<stdio.h>
#include<stdlib.h>
void bubblesort(int *x,int size)
{
int e,f,g,m,y;
m=size-2;
while(m>=0)
{
e=0;
f=1;
while(e<=m)
{
if(x[e]>x[f]){
g=x[e];
x[e]=x[f];
x[f]=g;
}
e++;
f++;
}
m--;
}
}
int main(){
int *x;
int y,j;
printf("Enter your requirement :");
scanf("%d",&j);
if(j<=0)
{
printf("Invalid requirement\n");
return 0;
}
x=(int *)malloc(sizeof(int)*j);
if(x==NULL)
{
printf("Unable to allocate memory\n");
return 0;
}
for(y=0;y<j;y++)
{
printf("Enter a number : ");
scanf("%d",&x[y]);
}
bubblesort(x,j);
for(y=0;y<j;y++)
{
printf("%d\t",x[y]);
}
free(x);  // to avoid memory leaks
return 0;
}