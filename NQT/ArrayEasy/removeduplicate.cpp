#include<iostream>
#include<vector>

using namespace std;

int removeduplicate(vector<int>&num){
    int j = 0 ;
    for(int i = 1 ;i<num.size();i++){
        if(num[j]!=num[i]){
            j++;
            num[j]=num[i];
        }
    }
    return j+1;
}

int main(){
    int n;
    cout<<"enter the size of vector";
    cin>>n;
    vector<int>num(n);
    for(int i = 0 ;i<n;i++){
        cout<<"enter the "<<i<<"th number";
        cin>>num[i];
    }
    int a = removeduplicate(num);
    for(int i = 0 ;i<a;i++){
        cout<<num[i];
    }

}