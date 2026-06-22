#include<iostream>
#include<vector>
#include<unordered_map>
 
using namespace std;

vector<int>twosum(vector<int>&nums,int target){
    unordered_map<int,int>mp;
    for(int i = 0;i<nums.size();i++){
        int a = target - nums[i];
        if(mp.find(a) != mp.end()){
            return{mp[a],i};
        }
        mp[nums[i]]=i;
    }
    return{};
}
int main(){ 
    int n;
    cout<<"enter the size of vector"<<endl;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0 ;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cout<<"enter the target"<<endl;
    cin>>target;
    vector<int>ans = twosum(nums,target);
    if(ans.size() == 2) {
        cout<<"answer is :";
        cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
