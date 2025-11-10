#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int>a = {8,2,5,4,7,6};
    for(int i = 1 ;i<a.size(); i++){
        int key = a[i];
        int j = i-1;
        while(j>=0 && a[j]>key){
             a[j+1] = a[j];
             j--;
        }
        a[j+1]= key;
    }
    for(int x : a){
        cout<<x<<" ";
    }
}