#include<iostream>
#include<vector>
using namespace std;
// int findPivotElement(vector<int> arr)
// {
//     int s = 0;
//     int e = arr.size() - 1;
//     int mid = s + (e - s) / 2;
//     if(arr.size()==1) return arr[0];   //add this line - if input array is of one element in the array
//     while (s <= e)
//     {
//         if (mid <= arr.size()-1  && arr[mid] > arr[mid + 1])
//         {
//             return arr[mid];
//         };

//         if (mid-1>=0 &&  arr[mid - 1] > arr[mid])
//         {
//             return arr[mid - 1];
//         };

//         if (arr[s] >= arr[mid])
//         {
//             e= mid - 1;   //change
//         }
//         else
//         {
//             s = mid + 1;   //change
//         }

//         mid = s + (e - s) / 2;
//     }
//     return -1;
// }

    int main(){
       int row,c=1,col,n;
       cout<<"Enter value of n: ";
       cin>>n;
       for(row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<c<<" ";
            c*=(row-col)/col;
        }
        cout<<endl;
       }
       return 0;         
    }
