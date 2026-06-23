#include<iostream>
#include<vector>
using namespace std;

int missingnum(vector<int>&nums){
    int ans = nums.size();
    for(int i = 0 ;i<nums.size();i++){
        ans = ans^i;;
        ans = ans^nums[i];
    }
    return ans;
}

int main(){
    int n ;
    cout<<"enter the size of the vector";
    cin>>n;
    vector<int>nums(n);
    for(int i = 0 ;i<n;i++){
        cout<<"enter the"<<i<<" th number:";
        cin>>nums[i];
    }
    int ans = missingnum(nums);
    cout<<ans;

}