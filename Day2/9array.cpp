//643. Maximum Average Subarray I

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
      int n = nums.size();
      double windowsum = 0 ;
      double maxavg = -1e9;

      for( int i = 0 ; i< k ;i++)
      {
        windowsum = windowsum + nums[i];
      }  
      maxavg = windowsum/k;

      for(int i = k ; i<n ;i++)
      {
          windowsum = windowsum + nums[i]-nums[i-k];
          double avg = windowsum/k;
          maxavg = max(maxavg , avg);
      }
      return maxavg;
    }
};