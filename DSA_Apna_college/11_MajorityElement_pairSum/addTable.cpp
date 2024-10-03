#include<iostream>
using namespace std;

void addTable(int n){
    int val=0;
    for(int i=1;i<=10;i++){
        val+=n;
        cout<<n<<" * "<<i<<" = "<<val<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter a value : ";
    cin>>n;
    addTable(n);
    return 0;
}