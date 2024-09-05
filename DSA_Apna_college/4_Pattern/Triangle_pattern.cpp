#include<iostream>
using namespace std;

// Problem 1 : *
//             * *
//             * * *
//             * * * *
//             * * * * *
void trianglePattern(int n){
    for(int j=1;j<=n;j++){
        for(int i=1;i<=j;i++)
        cout<<"* ";
        cout<<endl;
    }
}

// Problem 2 : 1
//             2 2
//             3 3 3
//             4 4 4 4
//             5 5 5 5 5

void trianglePattern_Number(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        cout<<i<<" ";
        cout<<endl;
    }
}

// Problem 3 : A
//             B B
//             C C C
//             D D D D
//             E E E E E

void trianglePattern_Char(int n){
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        cout<<ch<<" ";
        ch++;
        cout<<endl;
    }
}

// Problem 4 : 1
//             1 2
//             1 2 3
//             1 2 3 4
//             1 2 3 4 5

void trianglePattern_NumberChange(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        cout<<j<<" ";
        cout<<endl;
    }
}

// Problem 5 : 1
//             2 1
//             3 2 1
//             4 3 2 1
//             5 4 3 2 1

void trianglePattern_Reverse_NumberChange(int n){
    for(int i=1;i<=n;i++){
        for(int j=i;j>=1;j--)
        cout<<j<<" ";
        cout<<endl;
    }
} 

// Problem 6 : 1
//             2 3
//             4 5 6
//             7 8 9 10

void trianglePattern_Floyds(int n){
    int k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        cout<<k++<<" ";
        cout<<endl;
    }
}

// Problem 7 : A 
//             B C
//             D E F 
//             G H I J

void trianglePattern_FloydsChar(int n){
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        cout<<ch++<<" ";
        cout<<endl;
    }
}

// Problem 8 : Inverted Triangle Pattern
//     1 1 1 1
//       2 2 2
//         3 3
//           4

void trianglePattern_inverted(int n){
    for(int i=1;i<=n;i++){
        for(int j=i;j>1;j--)
        cout<<"  ";
        for(int j=n+1-i;j>=1;j--)
        cout<<i<<" ";
    cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    trianglePattern(n);
    cout<<endl<<endl;
    trianglePattern_Number(n);
    cout<<endl<<endl;
    trianglePattern_Char(n);
    cout<<endl<<endl;
    trianglePattern_NumberChange(n);
    cout<<endl<<endl;
    trianglePattern_Reverse_NumberChange(n);
    cout<<endl<<endl;
    trianglePattern_Floyds(n);
    cout<<endl<<endl;
    trianglePattern_FloydsChar(n);
    cout<<endl<<endl;
    trianglePattern_inverted(n);

}