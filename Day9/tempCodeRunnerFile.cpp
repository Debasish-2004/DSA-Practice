#include<iostream>
#include <vector>
using namespace std;
vector<int>a;
vector<int>b;
vector<int>ans;
int main(){
    int num ;
    cout<<"enter the nubmer of game";
    cin>>num;
    for(int i = 0 ;i<num;i++){
        int n ;
        cin>>n;
        a.push_back(n);
    }
    for(int i = 0 ;i<num;i++){
        int n ;
        cin>>n;
        b.push_back(n);
    }
    int maxwin = 0;
    int max = 0;
    for(int i = 0 ;i<num;i++){
        int diff =0;
        if(a[i]>b[i]){
            diff = a[i]-b[i];
        }
        else{
            diff = b[i]-a[i];
        }
        if(diff>maxwin){
            maxwin = diff;
            max = i;
        }
    }
    cout<<maxwin<<" "<<max;
    
}
