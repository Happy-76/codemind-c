#include<bits/stdc++.h>
using namespace std;
int find(int n){
    int mx=0;
    while(n>0){
        int r=n%10;
        mx=max(mx,r);
        n/=10;
    }
    return mx;
}
int main(){
    int num;
    cin>>num;
    cout<<find(num)<<endl;
    return 0;
}