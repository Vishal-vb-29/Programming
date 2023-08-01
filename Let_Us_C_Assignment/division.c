#include <stdio.h>

int main() {
    int e,h,m,s,ss,t,i;
    float per;
    printf("Enter marks of english :");
    scanf("%d",&e);
    printf("Enter marks of Hindi :");
    scanf("%d",&h);
    printf("Enter marks of Science :");
    scanf("%d",&s);
    printf("Enter marks of Social-science :");
    scanf("%d",&ss);
    printf("Enter marks of Maths :");
    scanf("%d",&m);
    t=e+h+m+s+ss;
    per=t/5;
    printf("percentage is : %f\n",per);
    if (per<=100 && per>=60) i=1;
    else if (per<60 && per>=45) i=2;
    else if (per>33) i=3; 
    switch(i)
    {
        case 1:
        printf("Pass with FIRST DIVISION\n");
        break;
        case 2:
        printf("Pass with SECOND DIVISION\n");
        break;
        case 3:
        printf("Pass with THIRD DIVISION\n");
        break;
        default:
        printf("FAIL");
    }
return 0;
}