#include<iostream>
#include<cmath>
using namespace std;

bool prime(int n){
    if(n==1 || n==2) return true;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int n;
    cout<<"Check if a number is prime or not"<<endl<<endl;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<endl;
    bool isPrime=prime(n);
    if(isPrime) cout<<n<<" is a Prime Number"<<endl<<endl;
    else cout<<n<<" is not a Prime Number"<<endl<<endl;
    return 0;
}