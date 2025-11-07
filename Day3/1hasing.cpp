//1. Two Sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int>m;
        for(int x=0 ; x< nums.size() ; x++)
        {
            int diff = target - nums[x];
            if(m.find(diff) != m.end()){
                return {m[diff] , x};
            }
            m[nums[x]] = x;
        }
        return {};
    }
};