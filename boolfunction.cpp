#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
bool comparetor(pair<int,int>p1, pair<int,int>p2)
{
   if(p1.second<p2.second) return true;
   if(p1.second>p2.second) return false;

   if(p1.first<p2.first) return true;
}
int main(){
  vector<pair<int,int>>vec={{3,1} ,{2,4} , {7,1} , {5,2}};
  sort(vec.begin() ,vec.end() ,comparetor);
  for(auto p : vec){
    cout<<p.first<<" "<<p.second<<endl;
  }
}