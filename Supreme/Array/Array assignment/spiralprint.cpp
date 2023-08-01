#include<iostream>
#include<vector>
using namespace std;
vector<int> spiralPrint(vector<vector<int>>& v)
{
vector<int> ans;
int m=v.size();
int n=v[0].size();
int startr=0;
int startc=0;
int lastr=m-1;
int lastc=n-1;
int totalelement=m*n;
int count=0;
while(count<=totalelement)
{
for(int i=startc;i<=lastc && count<totalelement;i++){ ans.push_back(v[startr][i]);
count++;
}
startr++;
for(int i=startr;i<=lastr && count<totalelement;i++){ ans.push_back(v[i][lastc]);
count++;
}
lastc--;
for(int i=lastc;i>=startc && count<totalelement;i--) {ans.push_back(v[lastr][i]);
count++;
}
lastr--;
for(int i=lastr;i>=startr && count<totalelement;i--){
ans.push_back(v[i][startc]);
count++;
}
startc++;
}
return ans;
}
int main()
{
vector<vector<int>> arr{{1,2,3,4},{5,6,7,8},{9,10,11,12}};
vector<int> ans = spiralPrint(arr);
for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
return 0;
}