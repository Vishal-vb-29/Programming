#include<stdio.h>
int main()
{
int phy,che,math,hin,eng,tot,per,fc=0;
printf("Enter marks of physics (0-100) : ");
scanf("%d",&phy);
if(phy<0 || phy>100) 
{
printf("Invalid marks\n");
return 0;
}
printf("Enter marks of chemistry (0-100) : ");
scanf("%d",&che);
if(che<0 || che>100) 
{
printf("Invalid marks\n");
return 0;
}

printf("Enter marks of maths (0-100) : ");
scanf("%d",&math);
if(math<0 || math>100) 
{
printf("Invalid marks\n");
return 0;
}

printf("Enter marks of hindi (0-100) : ");
scanf("%d",&hin);
if(hin<0 || hin>100) 
{
printf("Invalid marks\n");
return 0;
}

printf("Enter marks of english (0-100) : ");
scanf("%d",&eng);
if(eng<0 || eng>100) 
{
printf("Invalid marks\n");
return 0;
}
tot=phy+che+math+eng+hin;
printf("Total marks is : %d\n",tot);
if(phy<33) fc++;
if(che<33) fc++;
if(math<33) fc++;
if(hin<33) fc++;
if(eng<33) fc++;
if(fc==0)
{
printf("Pass\t");
per=tot/5;
printf("With percentage %d%\n",per);
if(per>=60 && per<=100) printf("Division I\n");
else if(per>=45 && per<60) printf("Division II\n");
else if(per<45) printf("Division III\n");
}
else if(fc==1) printf("supplementary");
else if(fc>1) printf("supplementary");
return 0;
}