//sliding window check 

#include<iostream>
#include<vector>
using namespace std ;

int main()
{
  vector <int> arr = {1,7,3,4,5,6};
  int n = arr.size();
  int k = 3;
  int arrsum = 0;
  int maxsum= 0 ;

  for(int i = 0 ; i < k ; i++)
  {
    arrsum = arrsum+arr[i];
  }
  maxsum = arrsum;

  for(int i = k ; i<n; i++)
  {
    arrsum = arrsum + arr[i] - arr[i-k];
    maxsum = max(maxsum , arrsum);
  }
  cout<<maxsum<<endl;

}