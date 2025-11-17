//46. Permutations

class Solution {
public:
void solve(vector<int>&nums , int x , vector<vector<int>>&ans){
    if(x == nums.size() ){
        ans.push_back(nums);
        return;
    }
    for(int i = x ; i< nums.size() ; i++)
    {
         swap(nums[i] , nums[x]);
         solve(nums , x+1 , ans);
         swap(nums[i] , nums[x]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans ;
        solve(nums , 0 , ans);
        return ans ;
    }
};
