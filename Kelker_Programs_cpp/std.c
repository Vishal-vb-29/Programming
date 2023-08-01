#include<stdio.h>
int main()
{
int phy,che,math,hin,eng,tot,per;
printf("Enter marks of physics (0-100) : ");
scanf("%d",&phy);
if(phy<0 || phy>100) 
{
printf("Invalid marks");
return 0;
}
printf("Enter marks of chemistry (0-100) : ");
scanf("%d",&che);
if(che<0 || che>100) 
{
printf("Invalid marks");
return 0;
}

printf("Enter marks of maths (0-100) : ");
scanf("%d",&math);
if(math<0 || math>100) 
{
printf("Invalid marks");
return 0;
}

printf("Enter marks of hindi (0-100) : ");
scanf("%d",&hin);
if(hin<0 || hin>100) 
{
printf("Invalid marks");
return 0;
}

printf("Enter marks of english (0-100) : ");
scanf("%d",&eng);
if(eng<0 || eng>100) 
{
printf("Invalid marks");
return 0;
}
tot=phy+che+math+eng+hin;
printf("Total marks is : %d",tot);
if(phy>=33 && che>=33 && math>=33 && hin>=33 && eng>=33) printf("Pass");
else if(phy<=33 && che>=33 && math>=33 && hin>=33 && eng>=33) printf("Supplementary in physics\n");
else if(phy>=33 && che<=33 && math>=33 && hin>=33 && eng>=33) printf("Supplementary in chemistry\n");
else if(phy>=33 && che>=33 && math<=33 && hin>=33 && eng>=33) printf("Supplementary in maths\n");
else if(phy>=33 && che>=33 && math>=33 && hin<=33 && eng>=33) printf("Supplementary in hindi\n");
else if(phy>=33 && che>=33 && math>=33 && hin>=33 && eng<=33)  printf("Supplementary in english\n");

return 0;
}