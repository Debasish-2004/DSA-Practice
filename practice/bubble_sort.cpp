#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int>a={2,4,1,5,0,8,6,1};
    int n = a.size();
    for(int i = 0 ; i<n-1; i++)
    { 
      bool sorted = false;  //used to stop unnessesary loops if the array is already sorted.
      for(int j = 0; j<n-i-1; j++){//j<n-i-1 is used cause the highest elements are already sorted in the right .
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
            sorted = true;
        }
      }
      if(!sorted){//no sorting  in a loop means the loop is already sorted.
        break;
      }
    }
    for(int y : a){
        cout<<y<<" ";
    }
}