//28. Longest Consecutive Sequence

//my approach without hashtable.
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0 ;
        sort(nums.begin() , nums.end());
        int flag = 1;
        int maxflag = 1; 
        for(int i = 1 ; i< nums.size() ; i++)
        {
            if(nums[i] - nums[i-1] == 0){
                continue;
            }
            if(nums[i]-nums[i-1] == 1){
                flag++;
            }
            else{
                maxflag = max(maxflag, flag);
                flag = 1;
            }
        }
        return max(maxflag , flag);
        
    }
};

//hastable approach . better ,faster.

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin() , nums.end());
        int ans = 0 ;
        for(auto num : s){
            if(!s.count(num-1)){
                int current = num;
                int strik  = 1 ;

                while(s.count(current+1)){
                    current++;
                    strik++;
                }
                ans = max(ans, strik);
            }
        }
        return ans;
    }
};  