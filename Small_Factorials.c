#include<bits/stdc++.h>
using namespace std;
int findfact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        int fact=findfact(num);
        cout<<fact<<endl;
    }
    return 0;
}