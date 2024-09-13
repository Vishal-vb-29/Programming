#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;

    // push_back Function
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4); //enter at last of vector

    // size Function
    cout<<"after push back size = "<<vec.size()<<endl;
    // capacity function
    cout<<"after push back capacity = "<<vec.capacity()<<endl;

    // pop_back Function
    vec.pop_back(); // last value removed

    // For each loop
    for(int val : vec) cout<<val<<" ";
    cout<<endl;

    // front Function
    cout<<"Printing Front value : "<<vec.front()<<" ";
    
    // back Function
    cout<<endl<<"Printing last value : "<<vec.back()<<endl;

    // At function
    cout<<vec.at(1)<<endl;

    return 0;
}