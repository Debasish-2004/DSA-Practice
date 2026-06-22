#include<iostream>
#include<vector>
using namespace std;

vector<int>addone(vector<int>&digits){
    for(int i = digits.size()-1;i>=0;i--){
        if(digits[i]<9){
            digits[i]=digits[i]+1;
            return digits;
        }
        else{
            digits[i]=0;
        }
    }
    digits.insert(digits.begin(),1);
    return digits;
}
int main(){
    int n;
    cout<<"enter the size of the vector";
    cin>>n;
    vector<int>digits(n);
    for(int i = 0 ;i<n;i++){
        cout<<"enter the "<<i<< " th number of vector";
        cin>>digits[i];
    }
    vector<int>result = addone(digits);
    for(int i = 0 ;i<result.size();i++){
        cout<<result[i];
    }

}