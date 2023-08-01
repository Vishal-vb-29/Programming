#include<stdio.h>
int main()
{
int a[5],e=0,f=1;
while(e<=4)
{
printf("Enter element: ");
scanf("%d",&a[e]);
e++;
}
e=0;
while(e<=4)
{
while(f<=4)
{
if(a[e]<a[f])
{
a[e]=a[e]+a[f];
a[f]=a[e]-a[f];
a[e]=a[e]-a[f];
}
f++;
}
e++;
}
e=0;
while(e<=4)
{
printf("Element of a[%d] is : %d\n",e,a[e]);
e++;
}
return 0;
}