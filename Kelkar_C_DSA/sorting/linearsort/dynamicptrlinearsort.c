#include<stdio.h>
#include<stdlib.h>
void linearsort(int *a,int size)
{
int e,f,g;
e=0;
while(e<=size-2)
{
f=e+1;
while(f<=size-1)
{
if(a[e]>a[f])
{
g=*(a+e);
*(a+e)=*(a+f);
*(a+f)=g;
}
f++;
}
e++;
}
}

int main()
{
int req;
int *a;
printf("Enter requirement :");
scanf("%d",&req);
if(req<=0)
{
printf("INVALID REQUIREMENt\n");
return 0;
}
a=(int *)malloc(sizeof(int)*req);
if(a==NULL)
{
printf("Unable to allocate memory for %d number\n",req);
return 0;
}
for(int i=0;i<req;i++)
{
printf("Enter a number :");
scanf("%d",&a[i]);
}
linearsort(a,req);
for(int i=0;i<req;i++)
{
printf("%d\t",a[i]);
}
free(a);
return 0;
}