// Homework Question : Print the unique value in an array
#include<iostream>
using namespace std;

int findUniqVal(int arr[],int sz){
    int unique=0;
    for(int i=0;i<sz;i++){
        unique^=arr[i];
    }
    return unique;
}


int main(){
    int arr[9];
    int sz=sizeof(arr)/sizeof(int);
    cout<<"Enter 10 values : ";
    for(int i=0;i<sz;i++) cin>>arr[i];
    cout<<"Printing Unique element "<<endl;
    cout<<findUniqVal(arr,sz);
    return 0;
}
