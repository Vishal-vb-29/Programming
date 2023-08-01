#include<stdio.h>
int main()
{
int aram,aajay,ashyam;
printf("Enter age of ram :");
scanf("%d",&aram);
printf("Enter age of ajay :");
scanf("%d",&aajay);
printf("Enter age of shyam :");
scanf("%d",&ashyam);
if ( aram<aajay && aram<ashyam) printf("Ram is younger");
else if ( aajay<aram && aajay<ashyam) printf("Ajay is younger");
else if (ashyam<aram && ashyam<aajay) printf("Shyam is younger");
else printf("They all three are of same age");
return 0;
}