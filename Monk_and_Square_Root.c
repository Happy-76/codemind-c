#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t; 
    cin>>t;
    while(t--){
        long long n, m;
        cin>>n>>m;
        long long ans = -1;
        for(long long i=0; i<m; i++)
            if((i*i)%m == n){
            ans = i;
            break;
        }
        cout<<ans<<endl;
    }
}