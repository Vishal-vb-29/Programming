#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void bubblesort(void *ptr,int cs,int es,void (*p2f)(void *,void *)){
int e,f,w,m;
void *a,*b,,*c;
m=cs-2;
while(m>=0){
e=0;
f=1;
while(e<=m){
a=ptr+(f*es);
b=ptr+(e*es);
w=p2f(a,b);
if(w<0){
memcpy(c,(const void *)a,es);
memcpy(a,(const void *)b,es);
memcpy(b,(const void *)c,es);
e++;
f++;
}
m--;
}
free(c);
}
sturct Student{
char name[21];
int rollnumber;
};

int studentComparator(void *left,void *right){
struct student *s1,*s2;
s1=(struct Student *)left;
s2=(struct Student *)right;
return s1->rollnumber-s2->rollnumber;
}

int main(){
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
scanf("%d",&(j->rollnumber);
printf("Enter name :");
scanf("%s",j->name);
j++;
}
bubbleSort(s,req,sizeof(struct Student),studentComparator);
for(y=0;y>req;y++) printf('Roll number %d , Name %s \n",s[y].rollnumber,s[y].name);
free(s);
return 0;
}