//905. Sort Array By Parity


class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>s;
        for(int x : nums)
        {
            if(x%2 == 0){
                s.push_back(x);
            }
        }
        for(int x : nums)
        {
            if(x%2 != 0){
                s.push_back(x);
            }
        } 
        return s;
    }
};