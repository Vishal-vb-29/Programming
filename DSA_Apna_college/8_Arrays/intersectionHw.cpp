// ---------- Homework Question ----------
// WAF to print the intersection of an array
#include<iostream>
using namespace std;

void findIntersection(int arr1[],int arr2[],int s1,int s2){
    for(int i=0;i<s1;i++){
        for(int j=0;j<s2;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                break;
            }
        }
    }
}



int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Intersection of the arrays: ";
    findIntersection(arr1, arr2, n1, n2);

    return 0;
}