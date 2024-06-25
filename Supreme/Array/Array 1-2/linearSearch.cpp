#include<iostream>
using namespace std;
bool find(int *arr,int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key) return true;
    }
    return false;
}

int main(){
    int n,key;
    cout<<"Enter the no of element you want to enter :";
    cin>>n;
    int arr[100];
    cout<<"Enter the Elements : ";
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"Enter a key to search in array :";
    cin>>key;
    if(find(arr,n,key)) cout<<"Found";
    else cout<<"Not Found";
    return 0;
}