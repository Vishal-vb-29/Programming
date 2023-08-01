#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
void printsubsequence(string str,string output , int i){
    if(i > str.length()){
        cout<<output<<endl;
        return ;
    }
    printsubsequence(str,output,++i);
    output.push_back(str[i]);
    printsubsequence(str,output,++i);
}
int main()
{
    string str="abc";
    int i=0;
    string output;
    printsubsequence(str,output,i);
   

    return 0;
    
}
