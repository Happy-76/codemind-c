#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
    string s=to_string(n);
    reverse(s.begin(),s.end());
    return n+stoi(s);
}
bool check(int n){
    string s=to_string(n);
    reverse(s.begin(),s.end());
    if(n==stoi(s))
    return true;
    return false;
}
int main(){
    int x;
    cin>>x;
    x=reverse(x);
    while(1){
        if(check(x))
        break;
        x=reverse(x);
    }
    cout<<x;
    return 0;
}