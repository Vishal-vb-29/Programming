#include<iostream>
#include<stack>
using namespace std;
void insertSorted(stack<int>& s,int target){
    if(s.empty()){
        s.push(target);
        return;
    }
    if(s.top()>=target){
        s.push(target);
        return;
    }
    int topElement=s.top();
    s.pop();
    insertSorted(s,target);

    s.push(topElement);
}

void sortStack(stack<int>& s){
    if(s.empty()) return ;
    int topElement=s.top();
    s.pop();
    sortStack(s);
    insertSorted(s,topElement);

}
void printStack(stack<int>& s){
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return;
}

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(70);
    s.push(20);
    s.push(50);
    s.push(60);
    sortStack(s);
    printStack(s);
    return 0;
}