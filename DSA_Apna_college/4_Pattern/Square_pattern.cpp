#include<iostream>
using namespace std;

// Problem 1 : 1 2 3 4 5
//             1 2 3 4 5
//             1 2 3 4 5
//             1 2 3 4 5
//             1 2 3 4 5


void squarePattern_Number(int n){
    for(int i=0;i<n;i++){
         for(int j=1;j<=n;j++)
         cout<<j<<" ";
        cout<<endl;
    }
}

// Problem 2 : A B C D E
//             A B C D E
//             A B C D E
//             A B C D E

void squarePattern_Char(int n){
    for(int i=0;i<n;i++){
        char ch='A';
         for(int j=1;j<=n;j++)
         cout<<ch++<<" ";
        cout<<endl;
    }
}

// Problem 3 : * * * * *
//             * * * * *
//             * * * * *
//             * * * * *
//             * * * * *
            

void squarePattern_Star(int n){
    for(int i=0;i<n;i++){
         for(int j=1;j<=n;j++)
         cout<<"* ";
        cout<<endl;
    }
}

// Problem 4 : 1 2 3 
//             4 5 6
//             7 8 9

void squarePattern_NumberContinue(int n){
    int k=1;
    for(int i=0;i<n;i++){
         for(int j=1;j<=n;j++)
         cout<<k++<<" ";
        cout<<endl;
    }
}

// Problem 5 : A B C 
//             D E F
//             G H I

void squarePattern_CharContinue(int n){
    char ch='A';
    for(int i=0;i<n;i++){
         for(int j=1;j<=n;j++)
         cout<<ch++<<" ";
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter size : ";
    cin>>n;
    squarePattern_Number(n);
    cout<<endl<<endl;
    squarePattern_Char(n);
    cout<<endl<<endl;
    squarePattern_NumberContinue(n);
    cout<<endl<<endl;
    squarePattern_CharContinue(n);

    return 0;
}