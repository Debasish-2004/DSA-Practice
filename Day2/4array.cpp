///167. Two Sum II - Input Array Is Sorted

wrong approach as the time limit exceed ;;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        for(int i= 0 ; i<n; i++)
        {
            for(int j =i+1 ; j<n ; j++)
            {
                if(numbers[i]+numbers[j]==target){
                    return {i+1,j+1};
                }
                
            }
        }
       return { }; 
    }

};
right approach ->
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int start = 0 ;
       int end = numbers.size()-1;
       while(start<end){
        if(numbers[start]+numbers[end]== target){
            return {start+1 , end+1};
        }
        if(numbers[start]+numbers[end] < target){
            start++;
        }
        else{
            end--;
        }
       }
       return {};
    }

};

