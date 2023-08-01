#include<iostream>
#include<string.h>
using namespace std;
void reverseString(char ch[])
{
int n=strlen(ch)-1;
for(int i=0;i<n;i++)
{
 swap(ch[i],ch[n]);
 n--;
}
}
int main()
{
char ch[100];
cout<<"Enter name : ";
cin.getline(ch,50);
reverseString(ch);
cout<<ch;
return 0;
}