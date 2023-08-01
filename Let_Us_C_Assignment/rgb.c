#include<stdio.h>
#include<stdlib.h>
int main()
{
float r,g,b;
float c,m,y,k,w,max;
printf("Enter the value of red (0-255) :");
scanf("%f",&r);
printf("Enter the value of green (0-255) :");
scanf("%f",&g);
printf("Enter the value of blue (0-255) :");
scanf("%f",&b);
if (r==0 && g==0 && b==0) 
{
c=m=y=0;
k=1;
}
else
{
r=r/255;
g=g/255;
b=b/255;
printf("Red : %f\n",r); 
max=r;
if(g>r) max=g;
else if(b>r && b>g) max=b;
w=max;
c=(w-r)/w;
m=(w-g)/w;
y=(w-b)/w;
k=1-w;
}
printf("The Cyan is : %f\n",c);
printf("The Magenta is : %f\n",m);
printf("The Yellow is : %f\n",y);
printf("The Black is : %f\n",k);

return 0;
}