#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;
int main(){
    vector<int>num= {2,3,4,2,7,7,8,50,30,5,3,2};
    unordered_set<int>s;
    for(int x :num){
       if(s.count(x))
         cout<<"duplicate number is :"<<x<<endl;
        s.insert(x);
    }
    return 0;

}
