#include<iostream>
using namespace std;
bool linearSearch2D(int arr[3][3],int rows,int cols,int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==key) return true;
        }
    }
    return false;
}

int main(){
    int key;
    int arr[3][3];
    cout<<"Enter the 9 Elements : ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the key you want to search : ";
    cin>>key;
    bool found = linearSearch2D(arr,3,3,key);
    if(found) cout<<"Found ";
    else cout<<"Not Found";
    return 0;
}