//Write a program to calculate body mass index of a person by taking input of weight and height of a user.bmi=weight/height^2
#include<stdio.h>
int main()
{
float bmi,weight,height;
printf("Enter your weight (in kg) : ");
scanf("%f",&weight);
printf("Enter you height (in meter) : ");
scanf("%f",&height);
bmi=weight/(height*height);
if (bmi<15) printf("Starvation");
else if(bmi>=15.1 && bmi<=17.5) printf("BMI Category : Anorexic\n");
else if(bmi>=17.6 && bmi<=18.5) printf("BMI Category : Underweight\n");
else if(bmi>=18.6 && bmi<=24.9) printf("BMI Category : Ideal\n");
else if(bmi>=25 && bmi<=25.9) printf("BMI Category : Overweight\n");
else if(bmi>=30 && bmi<=30.9) printf("BMI Category : Obese\n");
else if(bmi>=40) printf("Morbidly obese\n");
return 0;
}