#include<stdio.h>
#include<math.h>
int main()
{
float ag,sn,cs,tn,csc,sc,ct;
printf("Enter angle in degree , you want to see trignometric ratio :");
scanf("%f",&ag);
ag=ag*(3.14159/180);
if (ag>=0)
{
switch(1)
{
case 1:
sn=sin(ag);
printf(" sin(%f) : %f\n",ag,sn);
case 2:
cs=cos(ag);
printf(" cos(%f) : %f\n",ag,cs);
case 3:
tn=tan(ag);
printf(" tan(%f) : %f\n",ag,tn);
case 4:
ct=1/tn;
printf(" cot(%f) : %f\n",ag,ct);
case 5:
csc=1/sn;
printf(" cosec(%f) : %f\n",ag,csc);
case 6:
sc=1/cs;
printf(" sec(%f) : %f",ag,sc);
}
}
return 0;
}