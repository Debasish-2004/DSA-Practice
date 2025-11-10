#include<iostream>
#include<vector>

using namespace std;
void merge(vector<int>&a,int l , int m , int r ){
    vector<int>left(a.begin()+l,a.begin()+m+1);
    vector<int>right(a.begin()+m+1 , a.begin()+r+1);

    int i = 0 ; int j = 0 ; int k = l;
    while(i<left.size() && j<right.size()){
        if(left[i]<right[j]){
            a[k++]=left[i++];
        }
        else a[k++]=right[j++];
    }
    while(i<left.size()) a[k++]=left[i++];
    while(j<right.size()) a[k++]=right[j++];

}
void mergesort(vector<int>&a  , int l , int r ){
    if(l>=r) return;
    int m = (l+r)/2;
    mergesort(a ,l, m);
    mergesort(a,m+1,r);
    merge(a,l,m,r);
}
int main(){
    vector<int>a = { 8,2,5,4,7,6,9};
    int l = 0;
    int r = a.size()-1;
    mergesort(a,  l ,  r);
    for(int x : a)
   {
     cout<<x<<" ";
   }
}
