#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;
int main(){
 vector<int>nums = {1,2,3,4,5,6,7};
 int target = 9;
 unordered_map<int , int >m;
 for(int i = 0 ; i<nums.size() ; i++)
 {
    int diff = target - nums[i];
    if(m.find(diff) != m.end()){
        cout<<m[diff]<<" "<<i<<endl;
    }
    m[nums[i]]= i ;
 }
 return 0 ;
}
