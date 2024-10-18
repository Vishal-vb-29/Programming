#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int> &price){
    int maxProfit=0,bestBuy=price[0];
    for(int i=0;i<price.size();i++){
        if(price[i]>bestBuy && maxProfit<price[i]-bestBuy) maxProfit=(price[i]-bestBuy);
        if(bestBuy>price[i]) bestBuy=price[i];
    }
    return maxProfit;
}

int main(){
    vector<int> price={5,1,4,6,7,2};
    cout<<"Max Profit = "<<maxProfit(price);
    return 0;

}