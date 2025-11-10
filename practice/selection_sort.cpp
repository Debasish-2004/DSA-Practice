#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>a={3,56,0,7,1,9,45,7,85,4,3};
    int n = a.size();
    for(int i = 0 ; i< n-1 ;i++){
        int minindex = i;
        for(int j = i ; j<n ;j++){
            if(a[j]<a[minindex]){
                minindex=j;
            }
        }
        swap(a[i],a[minindex]);
    }
    for(int x : a){
        cout<<x<<" ";
    }
}