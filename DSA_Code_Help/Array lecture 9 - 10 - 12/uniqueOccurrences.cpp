#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Logic

bool uniqueOccurrences(vector<int>& arr) {
vector<int> a;
sort(arr.begin(), arr.end());

int cnt=1;
for(int i=0;i<(arr.size()-1); i++){
if(arr[i]==arr[i+1]){
cnt++;
if(i==(arr.size()-2)){
a.push_back(cnt);
}
}
else{
a.push_back(cnt);
cnt=1;
}
}
if(arr[arr.size()-1]!=arr[arr.size()-2]){
a.push_back(1);
}
sort(a.begin(), a.end());

int ans=1;
for(int i=0; i<(a.size()-1); i++){
if(a[i] != a[i+1]){
ans++;
}
}

if(ans == a.size()){
return true;
}
else{
return false;
}
}

int main()
{
bool a;
int size;
cout<<"Enter a size :";
cin>>size;
vector<int> ar;
int arr[20];
for(int i=0;i<size;i++)
{
cout<<"Enter a element :";
cin>>arr[i];
}
for(int i=0;i<size;i++) ar.push_back(arr[i]);
a=uniqueOccurrences(ar);
cout<<a;
return 0;
}