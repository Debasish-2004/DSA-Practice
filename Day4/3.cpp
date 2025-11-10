//75. Sort Colors

//quick sort approach , for all sorting .

class Solution {
public:
    void quicksort(vector<int>& nums, int low, int high) {
        if (low >= high)
            return;

        int pi = low + rand() % (high - low + 1);
        swap(nums[pi], nums[low]);  // ✅ Move pivot to start
        int pivot = nums[low];

        int i = low + 1;
        int l = low;
        int r = high;

        while (i <= r) {
            if (nums[i] < pivot)
                swap(nums[i++], nums[l++]);
            else if (nums[i] > pivot)
                swap(nums[i], nums[r--]);
            else
                i++;
        }

        quicksort(nums, low, l - 1);
        quicksort(nums, r + 1, high);
    }

    void sortColors(vector<int>& nums) {
        quicksort(nums, 0, nums.size() - 1);
    }
};

//for color sort 0,1,2.

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0 ;
        int mid = 0 ;
        int high = nums.size()-1;
        while(mid<=high){
            if(nums[mid] == 0)
            {
                swap(nums[mid++],nums[low++]);
            }
            else if(nums[mid] == 1)
             mid ++;
            else{
                swap(nums[mid], nums[high--]);
            }
        }

    }
};