#include<stdio.h>
#include<conio.h>
namespace thinkingmachines
{
class Keyboard{
public:
Keyboard & operator>>(int &j){
scanf("%d",&j);
fflush(stdin);
return *this;
}
Keyboard & operator>>(char &j){
j=getchar();
fflush(stdin);
return *this;
}
Keyboard & operator>>(char *j){
scanf("%s",j);
fflush(stdin);
return *this;
}
};
Keyboard kin;
}

using namespace thinkingmachines;
int main(){
int i,j;
char m;
char arr[21];
printf("Enter two integer :");
kin>>j>>i;
printf("Enter a character :");
kin>>m;
printf("Enter a string :");
kin>>arr;
printf("result is:\n");
printf("%d\n%d\n",j,i);
printf("%c\n",m);
printf("%s\n",arr);
return 0;
}