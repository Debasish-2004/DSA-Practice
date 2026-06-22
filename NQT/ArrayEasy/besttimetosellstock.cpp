#include<iostream>
#include<vector>

using namespace std;

int maxprofit(vector<int>&prices){
    int minprice= prices[0];
    int profit = 0;
    for(int i = 1;i<prices.size();i++){
        if(minprice > prices[i]){
            minprice = prices[i];
        }
        profit = max(profit , prices[i]-minprice);
    }
    return profit;
}
int main(){
    int n;
    cout<<"enter the size of the vector";
    cin>>n;
    vector<int>prices(n);
    for(int i = 0 ;i<n;i++){
        cout<<"enter the"<<i<<" th number : ";
        cin>>prices[i];
    }
    int maxprof = maxprofit(prices);
    cout<<"the maximumprofit is "<<maxprof;
}