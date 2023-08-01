#include<stdio.h>
#include<math.h>
int main()
{
int s1,s2,s3,max,flag=0;
max=s1;
printf("Enter three sides of a traingle:");
scanf("%d%d%d",&s1,&s2,&s3);
if (s1==s2 && s2==s3) printf("The traingle is an eqilateral traingle\n");
else if((s1==s2 && s1!=s3 ) || (s1==s3 && s1!=s2) || s2==s3 && s1!=s2) printf("The traingle is an isosceles traingle\n");
else if(s2>max) {
max=s2;
if(s3>max) max=s3;
if(max==s1)
{
if(pow(max,2)==pow(s2,2)+pow(s3,2)) flag=1;
}
if(max==s2)
{
if(pow(max,2)==pow(s1,2)+pow(s3,2)) flag=1;
}
if(max==s3)
{
if(pow(max,2)==pow(s1,2)+pow(s2,2)) flag=1;
}
}
if(flag==1) printf("The traingle is an right angled traingle\n");
else if(s1!=s2 && s1!=s3 && s2!=s3) printf("The traingle is scalene traingle\n");
return 0;
}
