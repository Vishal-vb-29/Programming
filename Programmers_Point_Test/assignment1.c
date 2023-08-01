#include<stdio.h>
int main()
{
int branch,year;
printf("Enter your branch number 1-CS 2-IT 3-EC :");
scanf("%d",&branch);
fflush(stdin);
switch(branch)
{
case 1:
printf("Welcome to CS branch....!\n");
printf("Enter your year(1-4) :");
scanf("%d",&year);
fflush(stdin);
switch(year)
{
case 1:
printf("Your subject for 1st year are:\n 1.Engineering Physics\n 2.Chemistry\n 3.Engineering Mathematics\n 4.Engineering Drwaing\n 5.Basic Computer Engineering\n");
break;
case 2:
printf("Your subject for 2nd year are:\n 1.Mathematics II\n 2.DS\n 3.MAC\n 4.OS\n 5.HW\n");
break;
case 3:
printf("Your subject for 3rd year are: 1.Digital System\n 2.Discrete Structure\n 3.Data Structure\n 4.EEE\n 5.OOPS\n");
break;
case 4:
printf("Your subject for 4th year are: 1.Theory Of Compuitation\n 2.Data Analytics\n 3.DBMS\n 4.IWT\n 5.PYTHON (lab)\n");
break;
default:
printf("Invalid choice\n");
}
break;

case 2:
printf("Welcome to IT branch....!\n");
printf("Enter your year(1-4) :");
scanf("%d",&year);
fflush(stdin);
switch(year)
{
case 1:
printf("Your subject for 1st year are: 1.IT1\n 2.IT2\n 3.IT3\n 4.IT4\n 5.IT5\n");
break;
case 2:
printf("Your subject for 2nd year are: 1.IIT1\n 2.IIT2\n 3.IIT3\n 4.IIT4\n 5.IIT5\n");
break;
case 3:
printf("Your subject for 3rd year are: 1.IIIT1\n 2.IIIT2\n 3.IIIT3\n 4.IIIT4\n 5.IIIT5\n");
break;
case 4:
printf("Your subject for 4th year are: 1.IIIIT1\n 2.IIIIT2\n 3.IIIIT3\n 4.IIIIT4\n 5.IIIIT5\n");
break;
default:
printf("Invalid choice\n");
}
break;
case 3:
printf("Welcome to EC branch....!\n");
printf("Enter your year(1-4) :");
scanf("%d",&year);
fflush(stdin);
switch(year)
{
case 1:
printf("Your subject for 1st year are: 1.EC1\n 2.EC2\n 3.EC3\n 4.EC4\n 5.EC5\n");
break;
case 2:
printf("Your subject for 2nd year are: 1.EEC1\n 2.EEC2\n 3.EEC\n 4.EEC\n 5.EEC5\n");
break;
case 3:
printf("Your subject for 3rd year are: 1.EEEC1\n 2.EEEC\n 3.EEEC3\n 4.EEEC4\n 5.EEEC5\n");
break;
case 4:
printf("Your subject for 4th year are: 1.EEEEC1\n 2.EEEEC2\n 3.EEEEC3\n 4.EEEEC4\n 5.EEEEC5\n");
break;
default:
printf("Invalid choice\n");
}
break;
default:
printf("Invalid Choice ...! \n Choose between(1-3)\n");
}
return 0;
}