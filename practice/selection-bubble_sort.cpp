#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>a={3,56,0,7,1,9,45,7,85,4,3};
    int n = a.size();
    for(int i = 0 ; i< n-1 ;i++){
        for(int j = i ; j<n ;j++){
            if(a[i]>a[j]){
                swap(a[i] , a[j]);
            }
        }
    }
    for(int x : a){
        cout<<x<<" ";
    }
}