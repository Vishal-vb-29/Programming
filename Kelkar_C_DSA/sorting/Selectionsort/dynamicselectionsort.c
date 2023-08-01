#include<stdio.h>
#include<stdlib.h>
void SelectionSort(int *x,int s)
{
int e,f,g,si;
e=0;
while(e<=s-2)
{
f=e+1;
si=e;
while(f<=s-1)
{
if(x[f]<x[si]) si=f;
f++;
}
g=x[si];
x[si]=x[e];
x[e]=g;
e++;
}
}
int main()
{
int *s,y,req;
printf("Enter your Requirement : ");
scanf("%d",&req);
if(req<=0){
printf("INVALID REQUIREMENT\n");
return 0;
}
s=(int *)malloc(sizeof(int)*req);
if(s==NULL) {
printf("Unable to allocate memory for %d number \n",req);
return 0;
}
for(y=0;y<req;y++) {
printf("Enter number :");
scanf("%d",&s[y]);
}
SelectionSort(s,req);
for(y=0;y<req;y++) printf("%d\t",s[y]);
free(s);
return 0;
}
