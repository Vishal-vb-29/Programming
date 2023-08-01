#include<iostream>
using namespace std;
bool findkey(int arr[][3],int row,int col,int key)
{
for(int i=0;i<row;i++){
for(int j=0;j<col;j++){
if(arr[i][j]==key) return true;
}
}
return false;
}

int main()
{
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int key;
cout<<"Enter a key (1-9) :";
cin>>key;
cout<<findkey(arr,3,3,key);

return 0;
}