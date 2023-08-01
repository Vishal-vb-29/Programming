#include<Stdio.h>
int main()
{
int num,y=2,ep,z=0;
printf("Enter your no. : ");
scanf("%d",&num);
if(num<0)
{
printf("%d is neither prime nor composite\n",num);
return 0;
}
while(y<=num-1){
if(num%y==0){
z=1;
break;
}
y++;
}
if(z==0
) printf("%d is prime number",num);
else printf("%d is composite",num);
return 0;
}