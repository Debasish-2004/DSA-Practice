#include<iostream>
#include <vector>
using namespace std;
int main(){
    int num ;
    cout<<"enter the size";
    cin>>num;
    vector<int>a;
    vector<int>b;
    vector<int>ans;
    for(int i = 0 ;i<num; i++){
        cout<<"enter element of a";
        int n;
        cin>>n;
        a.push_back(n);
    }
    for(int i = 0 ;i<num; i++){
        cout<<"enter element of a";
        int n;
        cin>>n;
        b.push_back(n);
    }
    int alice = 0;
    int bob = 0;
    for(int i = 0 ;i<num;i++){
        if(a[i]==b[i]){
            alice++;
        }
        else bob++;
    }

    return {alice,bob};
    
}
