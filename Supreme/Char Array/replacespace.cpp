#include<iostream>
#include<string.h>
using namespace std; 
void replaceSpace(char a[]){
int n=strlen(a);
for(int i=0;i<n;i++)
{
if(a[i]==' ') a[i]='@';
}
cout<<a;

}
int main()
{
char ch[100];
cout<<"Enter Sentence : ";
cin.getline(ch,50);
replaceSpace(ch);

return 0;
}