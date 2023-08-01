
#include <stdio.h>

void linearsort(int *x,int size){
    int e=0,f,g;
while(e<=size-2){
f=e+1;
while(f<=size-1){
    if(x[e]>x[f]){
        g=x[e];
        x[e]=x[f];
        x[f]=g;
    }
f++;
}
e++;
}
for(int i=0;i<size;i++) printf("%d\n",x[i]);
}
int main(){
    int x[10],size;
    printf("Enter size :");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        printf("Enter a number :");
        scanf("%d",&x[i]);
    }
    linearsort(x,size);
return 0;
}