//34. Find First and Last Position of Element in Sorted Array

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0;
        int n = nums.size()-1;
        int high = n;
         int ans1 = -1 ;
         int ans2 =-1;
        while(low <= high)
        {
            int mid = low +(high-low)/2;
            if(nums[mid]== target)
            {
                ans1 = mid;
                high = mid - 1;
            } 
            else if(nums[mid] < target)
              low = mid + 1;
            else 
              high = mid - 1;
        }
        low = 0;
        high = n;
        while(low <= high)
        {
            int mid = low +(high-low)/2;
            if(nums[mid]== target)
            {
                ans2 = mid;
                low = mid + 1;
            } 
            else if(nums[mid] < target)
              low = mid + 1;
            else 
              high = mid - 1;   
        }
        return {ans1,ans2};
    }
};