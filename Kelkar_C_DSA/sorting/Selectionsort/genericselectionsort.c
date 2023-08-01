#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void selectionSort(void *ptr, int cs , int es, int (*p2f)(void *,void *))
{
int e,f,si,w;
int *a,*b,*c;
c=(void *)malloc(es);
e=0;
while(e<=cs-2)
{
f=e+1;
si=e;
while(f<=cs-1)
{
a=ptr+(f*es);
b=ptr+(e*es);
w=p2f(a,b);
if(w<0) si=f;
f++;
}
a=ptr+(e*es);
b=ptr+(si*es);
memcpy(c,(const void*)a,es);
memcpy(a,(const void*)b,es);
memcpy(b,(const void*)c,es);
e++;
}
}



int myComparator(void * left,void * right)
{
int *a,*b;
a=(int *)left;
b=(int *)right;
return (*a)-(*b);
}




int main()
{
int *x,req,y;
printf("Enter your requirement: ");
scanf("%d",&req);
if(req<=0) 
{
printf("INVALID REQUIREMENT \n");
return 0;
}
x=(int *)malloc(sizeof(int)*req);
if(x==NULL)
{
printf("Unable to allocate memory for %d number ",req);
return 0;
}
for(y=0;y<req;y++)
{
printf("Enter number :");
scanf("%d",&x[y]);
}
selectionSort(x,req,sizeof(int),myComparator);
for(y=0;y<req;y++) printf("%d\t",x[y]);
free(x);
return 0;
}