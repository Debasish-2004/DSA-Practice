#include<iostream>
#include<vector>

using namespace std;

int partition(vector<int>&a , int low , int high){
    int pivot = a[high];
    int i = low - 1 ;
    for(int j = low ; j<high; j++){
        if(a[j]<pivot)
          {
            i++;
            swap(a[j],a[i]);
          }   
    }
    swap(a[i+1], a[high]);
    return i+1;
}
void quicksort(vector<int>&a , int low , int high ){
    if(low < high){
        int pi = partition(a, low , high);
        quicksort(a,low , pi-1);
        quicksort(a,pi+1 , high);
    }

}

int main()
{
    vector<int>a = {2,8,1,9,5,3,1,0,2};
    quicksort(a , 0 , a.size()-1);
    for(int x :a){
        cout<<x<<" ";
    }
}