#include<bits/stdc++.h>
using namespace std;
int hcf(int a,int b){
    while(a!=b){
        if(a>b)
        a-=b;
        if(b>a)
        b-=a;
    }
    return a;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int h=hcf(arr[0],arr[1]);
    for(int i=2;i<n;i++){
        h=hcf(h,arr[i]);
    }
    cout<<h<<endl;
    return 0;
}