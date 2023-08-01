#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void bubbleSort(void *ptr,int cs,int es,int (*p2f)(void *,void *)){
int e=0,f,w,m;
void *a,*b,*c;
c=maclloc(es); 
m=cs-2;
while(e<=m){
f=e+1;
while(f<=e+1){
a= ptr + (f * es);
b= ptr + (e * es);
w = p2f(a,b);
if(w>0){
memcpy(c,(const void *)a,es);
memcpy(a,(const void *)b,es);
memcpy(b,(const void *)c,es);
}
e++;
f++;
}
m--;
}
free(c);
}

struct Student{
char name[21];
int rollnumber;
};
int studentComparator(void * left,void * right)
{
struct Student *s1,*s2;
s1=(struct Student *)left;
s2=(struct Student *)right;
return (s1->rollnumber-s2->rollnumber) ;  //strcmp(s1->name,s2->name);
}
int main()
{
int req;
struct Student *s,*j;
int y;
printf("Enter your requirement :");
scanf("%d",&req);
if(req<=0){
printf("INVALID REQUIREMENT\n");
return 0;
}
s=(struct Student *)malloc(sizeof(struct Student)*req);
j=s;
if(s==NULL){
printf("Unable to allocate memory for %d number\n",req);
return 0;
}
for(y=0;y<req;y++)
{
printf("Enter rollnumber :");
scanf("%d",&(j->rollnumber));
printf("Enter name :");
scanf("%s",j->name);
j++;
}
bubbleSort(s,req,sizeof(struct Student),studentComparator);
for(y=0;y<req;y++)
{
printf("Roll number %d , Name %s \n",s[y].rollnumber,s[y].name);
}
free(s);
return 0;
}