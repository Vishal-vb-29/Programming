#include <stdio.h>

int main() {
    float bs , da , hra,gs;
    printf("Enter your basic salary :");
    scanf("%f",&bs);
    da=0.4*bs;
    hra=0.2*bs;
    gs=bs+da+hra;
    printf("Your BASIC SALARY : %f\n",bs);
    printf("Your GROSS SALARY : %f\n",gs);

    return 0;
}