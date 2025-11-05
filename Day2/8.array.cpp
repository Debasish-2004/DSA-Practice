//560. Subarray Sum Equals K

//brute force method by me 

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>prefix(n);

        prefix[0]=nums[0];
        for(int i =1 ; i<n ; i++)
        {
            prefix[i] = prefix[i-1]+nums[i]; 
        }
        int flag = 0 ;
        for(int i = 0 ; i <n ; i++)
        {
            if (prefix[i] == k) flag++;
            for(int j = 0 ; j < i ; j++)
         {
              int sum = prefix[i]- prefix[j];
              if(sum == k )
              flag++;
         }       
        }
        return flag ;
    }
};

//hashing method

