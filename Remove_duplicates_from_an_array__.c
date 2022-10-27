#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    set<int> at;
    for(int i=0;i<n;i++){
        at.insert(arr[i]);
    }
    for(auto it:at)
    cout<<it<<" ";
    return 0;
}