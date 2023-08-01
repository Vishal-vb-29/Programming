#include <iostream>
using namespace std;

int main() {
  int dbms[10];
  for(int i =0;i<10;i++)
    {cout<<"Enter a element :";
    cin>>dbms[i];
      }
  for(int i =0;i<10;i++) dbms[i]=1;
  for(int i =0;i<10;i++) cout<<dbms[i]<<" ";
  
return 0;
  }