#include<iostream>
using namespace std;
int main(){
int key;
int a[10]={5,12,4,58,6,9,12,54,20,23};
cout<<"Enter the key element : ";
cin>>key;
for(int i=0;i<10;i++){
if(a[i]==key){ cout<<"The element is at index : "<<i<<endl;
break;
}
}
if(i==10) cout<<"Not Found";
return 0;
}