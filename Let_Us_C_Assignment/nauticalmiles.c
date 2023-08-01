#include<stdio.h>
#include<math.h>
int main()
{
float l1,l2,g1,g2,d;
const float PI=3.141592;
printf("Enter latitude point L1 :");
scanf("%f",&l1);
printf("Enter latitude point L2 :");
scanf("%f",&l2);
printf("Enter latitude point g1 :");
scanf("%f",&g1);
printf("Enter latitude point g2 :");
scanf("%f",&g2);
l1=l1*(PI/180);
l2=l2*(PI/180);
g1=g1*(PI/180);
g2=g2*(PI/180);
d=(3963)*acos(sin (l1) *sin (l2) +cos(l1)* cos (l2)*cos(g2-g1));
printf("The distance (D) between latitude (%f,%f) and longitude (%f,%f) is : %f",l1,l2,g1,g2,d);
return 0;
}