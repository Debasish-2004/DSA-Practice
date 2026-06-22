#include<iostream>
using namespace std;
string main(){
    cout<<"enter 3 angles";
    int a ;
    int b ;
    int c ;
    cin>>a>>b>>c;
    if((a+b+c)==180){
        return "YES";
    }
    else{
        return "NO";
    }
}