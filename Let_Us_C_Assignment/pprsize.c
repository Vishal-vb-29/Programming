#include<stdio.h>
int main()
{
int A0,A1,A2,A3,A4,A5,A6,A7,A8,s1,s2,ch;
s1=1189;
s2=841;
printf("Press 0 . to get the width and height of A0\n");
printf("Press 1 . to get the width and height of A1\n");
printf("Press 2 . to get the width and height of A2\n");
printf("Press 3 . to get the width and height of A3\n");
printf("Press 4 . to get the width and height of A4\n");
printf("Press 5 . to get the width and height of A5\n");
printf("Press 6 . to get the width and height of A6\n");
printf("Press 7 . to get the width and height of A7\n");
printf("Press 8 . to get the width and height of A8\n");
printf("Enter your choice :");
scanf("%d",&ch);
switch (ch)
{
	case 0:
	printf("Size of A0 width : %d mm & height : %d mm\n",s2,s1);
	break;
	case 1:
	printf("Size of A0 width : %d mm & height : %d mm\n",s1/2,s2);
	break;
	case 2:
	printf("Size of A0 width : %d mm & height : %d mm\n",s2/2,s1/2);
	break;	
	case 3:
	printf("Size of A0 width : %d mm & height : %d mm\n",s1/4,s2/2);
	break;
	case 4:
	printf("Size of A0 width : %d mm & height : %d mm\n",s2/4,s1/4);
	break;
	case 5:
	printf("Size of A0 width : %d mm & height : %d mm\n",s1/8,s2/4);
	break;
	case 6:
	printf("Size of A0 width : %d mm & height : %d mm\n",s2/8,s1/8);
	break;
	case 7:
	printf("Size of A0 width : %d mm & height : %d mm\n",s1/16,s2/8);
	break;
	case 8:
	printf("Size of A0 width : %d mm & height : %d mm\n",s2/16,s1/16);
	break;
} 
return 0;
}