#include<stdio.h>
int main()
{
int num,ans=1;
printf("Enter a number : ");
scanf("%d",&num);
for(int i=0;i<=30;i++){
	if(ans==num) {
	printf("It is a no which has power of two");
	return 0;
    }	
ans=ans*2;
}
printf("It is not a no which has power of two");

return 0;
}