#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(count(a,a+n,a[i])==1){
            cout<<a[i];
            break;
        }
    }
    return 0;
}