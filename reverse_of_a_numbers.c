#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
    string s=to_string(n);
    reverse(s.begin(),s.end());
    return stoi(s);
}
int main(){
    int num;
    cin>>num;
    if(num>0)
    cout<<reverse(num)<<endl;
    else
    cout<<"-"<<reverse(num)<<endl;
    return 0;
}