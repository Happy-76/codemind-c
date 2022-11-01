#include<bits/stdc++.h>
using namespace std;
bool ispalin(int n){
    string s;
    s=to_string(n);
    reverse(s.begin(),s.end());
    if(n==stoi(s))
    return true;
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        if(ispalin(num))
        cout<<"True"<<endl;
        else
        cout<<"False"<<endl;
    }
    return 0;
}