//912. Sort an Array

//wrong practice 

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
       sort(nums.begin() , nums.end()); 
       return nums;
    }
};