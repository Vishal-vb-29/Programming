#include<stdio.h>
#include<math.h>
int main()
{
int ang;
float sum,rad;
const float PI=3.1415;
printf("Enter the Angle (in degree) :");
scanf("%d",&ang);
rad=ang*(180/PI);
sum= sin(ang)*sin(ang)+cos(ang)*cos(ang);
if (sum==1) printf("sum of squares of sine and cosine of %d angle is equal to 1\n",ang);
else printf("sum is not 1\n");
return 0;
}