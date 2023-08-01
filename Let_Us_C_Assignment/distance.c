#include<stdio.h>
int main()
{
int ch;
float dc,mt,ft,in,cm;
printf("Enter a distance between two cities in kms :");
scanf("%f",&dc);
printf("Press 1. To convert Distance in meter\n");
printf("Press 2. To convert Distance in feet\n");
printf("Press 3. To convert Distance in inches\n");
printf("Press 4. To convert Distance in centimeter\n");
printf("Enter your choice :");
scanf("%d",&ch);
switch(ch)
{
	case 1:
	mt=dc*1000;
	printf("The distance between two cities is %f meters",mt);
	break;
	
	case 2:
	ft=dc*3280.83;
	printf("The distance between two cities is %f feet",ft);
	break;
	case 3:
	in=dc*39370.07;
	printf("The distance between two cities is %f inches",in);
	break;
	case 4:
	cm=dc*100000;
	printf("The distance between two cities is %f centimeters",cm);
	break;
	default :
	printf("Invalid choice");

}
return 0;
}