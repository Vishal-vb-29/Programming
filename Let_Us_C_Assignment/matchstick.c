#include<stdio.h>
int main()
{
int match=21,count,pick;
while(1)
{
printf("There are %d matchstick left\n\n",match);
printf("Pick matchstick 1 or 2 or 3 or 4 :");
scanf("%d",&pick);
match=match-pick;
printf("\n\nNo. of matchstick left : %d\n\n",match);
count=5-pick;
printf("Computer pick %d matchstick out of %d \n\n",count,match);
match=match-count;
if(match==1)
{
printf("\nNumber of matchstick left : %d\n\n",match);
printf("\nYou lost the game\n");
break;

}
}
return 0;
}