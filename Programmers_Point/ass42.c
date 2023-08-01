#include<Stdio.h>
#include<math.h>
int main()
{
int num,digit,i=0,num1=0;
printf("Enter a number : ");
scanf("%d",&num);
while(num){
digit=num%10;
num1=(num1*10)+digit;
num=num/10;
i++;
}
while(num1)
{
digit=num1%10;
switch(digit){
	case 0: printf("ZERO ");
			break;
	case 1: printf("ONE ");
			break;
	case 2: printf("TWO ");
			break;
	case 3: printf("THREE ");
			break;
	case 4: printf("FOUR ");
			break;
	case 5: printf("FIVE ");
			break;
	case 6: printf("SIX ");
			break;
	case 7: printf("SEVEN ");
			break;
	case 8: printf("eight ");
			break;
	case 9: printf("NINE ");
			break;
}
num1=num1/10;


}
return 0;
}