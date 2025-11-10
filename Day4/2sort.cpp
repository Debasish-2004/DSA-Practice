//912. Sort an Array

//wrong practice 

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
       sort(nums.begin() , nums.end()); 
       return nums;
    }
};

//right approach - Dutch national flag algorithm.

class Solution {
public:
    void quicksort(auto & nums, int low, int high) {
        if (low >= high)
            return;

        int pivot_index = low + rand()%(high - low + 1);
        int pivot = nums[pivot_index];

        swap(nums[low], nums[pivot_index]);

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

    vector<int> sortArray(vector<int>& nums) {
        quicksort(nums, 0, nums.size() - 1);
        return nums;
    }
};