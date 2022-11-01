#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    int candies[n];
    for(int i=0;i<n;i++){
        cin>>candies[i];
    }
    cin>>m;
    int mac=*max_element(candies,candies+n);
    for(int i=0;i<n;i++){
        if(candies[i]+m>=mac)
        cout<<"True"<<" ";
        else
        cout<<"False"<<" ";
    }
    return 0;
}