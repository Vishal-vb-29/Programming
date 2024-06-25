#include<iostream>
using namespace std;

int main(){
string s;
cin>>s;
int index=0;
while(s[index]!=':'){
     index++;
    while(s[index]!=','){
    index++;
}
string chars=s.substr(0,index);
string numbers=s.substr(index+1,s.size()-1);
double val=stod(numbers);
cout<<chars<<endl;
cout<<val<<endl;
}
// while(s[index]!=','){
//     index++;
// }
// string chars=s.substr(0,index);
// string numbers=s.substr(index+1,s.size());
// double val=stod(numbers);

return 0;
}
