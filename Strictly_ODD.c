#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int visit=0;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(ar[i]%2!=0){
                visit=1;
                cout<<"False";
                break;
            }
        }
    }
    if(visit==0)
    cout<<"True";
    return 0;
}