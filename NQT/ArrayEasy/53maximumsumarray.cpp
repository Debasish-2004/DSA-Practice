#include<iostream>
#include<vector>
using namespace std;

int maxsumarray(vector<int>&arr){
    int currsum = arr[0];
    int maxsum = arr[0];
    for(int i = 1;i<arr.size();i++){
        currsum = max(arr[i],currsum + arr[i]);
        maxsum = max(maxsum,currsum);
    }
    return maxsum;
}
int main(){
    int n ;
    cout<<"enter the size of the vector";
    cin>>n;
    vector<int>arr(n);
    for(int i = 0 ;i<n;i++){
        cout<<"enter the "<<i<<" th number or vector";
        cin>>arr[i];
    }
    int maxsum = maxsumarray(arr);
    cout<<maxsum;

}