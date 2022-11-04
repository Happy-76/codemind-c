#include<bits/stdc++.h>
using namespace std;
int lcm(int a,int b){
    int m=max(a,b);
    while(true){
        if(m%a==0 && m%b==0)
        return m;
        m++;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=lcm(arr[0],arr[1]);
    for(int i=2;i<n;i++){
        l=lcm(l,arr[i]);
    }
    cout<<l<<endl;
    return 0;
}