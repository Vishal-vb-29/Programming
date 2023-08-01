#include<stdio.h>
int prime(int num){
int rem,z=0;
if (num<0) {printf("Invalid number\n");
return 0;
}
else if(num<2 ){ printf("1\n");
return 0;
}
else if(num<=2) {printf("1\t2\t");
return 0;
}
else { int j;
printf("1\t2\t");
for(j=3;j<=num;j++)
{
z=0;
for (int i=2 ; i<=j-1;i++){
if(j%i==0) {
z=0;
break;
}
else if(j%i!=0) z=1;
}
if(z==1) printf("%d\t",j);
}
}
}

int main()
{
int num;
printf("Enter a number : ");
scanf("%d",&num);
prime(num);
return 0;
}