#include<stdio.h>
int main()
{
float hardness,carbon_content,tensile_strength;
printf("Enter the value of Hardness of steel :");
scanf("%f",&hardness);
printf("Enter the value of Carbon content of steel :");
scanf("%f",&carbon_content);
printf("Enter the value of Tensile Strength of steel :");
scanf("%f",&tensile_strength);
if (hardness>50 &&carbon_content<0.7 && tensile_strength>5600) printf("Your steel is of Grade 10\n");
else if (hardness>50 && carbon_content<0.7 ) printf("Your steel is of Grade 9\n");
else if (carbon_content<0.7 && tensile_strength>5600) printf("Your steel is of Grade 8\n");
else if (hardness>50 && tensile_strength>5600) printf("Your steel is of Grade 7\n");
else if (hardness>50 || carbon_content<0.7 || tensile_strength>5600) printf("Your steel is of Grade 6\n");
else printf("Your steel is grade 5\n");
return 0;
}
