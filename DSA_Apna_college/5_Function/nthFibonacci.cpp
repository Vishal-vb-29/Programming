// WAF to print nth fibonacci
#include<iostream>
using namespace std;

void nthFibonacci(int n){
    int firstnum=0,secondnum=1;
    int nextnum;
    cout<<firstnum<<" "<<secondnum<<" ";
    for(int i=1;i<=n-2;i++){
        nextnum=firstnum+secondnum;
        firstnum=secondnum;
        secondnum=nextnum;
        cout<<nextnum<<" ";
    }
    
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    nthFibonacci(n);
    return 0;
}