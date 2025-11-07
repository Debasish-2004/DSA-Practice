#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;
int main()
{
    vector<int>a = {1,2,3,4,5,6};
    vector<int>b = {2,4,6,8,0};
    unordered_set<int>s(a.begin(),a.end()) ;
    unordered_set<int>res;
    for(int x :b){
        if(s.count(x))
        res.insert(x);
    }
   for(int y : res){
    cout<<y<<" ";
   }
}