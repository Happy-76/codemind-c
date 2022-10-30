#include<bits/stdc++.h>
using namespace std;
bool check(int n){
    int s=sqrt(n);
    if(n==0|| n==1)
    return false;
    else{
        for(int i=2;i<=s;i++){
            if(n%i==0)
            return false;
        }    
    }
    return true;
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    int count=0;
    for(int i=a;i<=b;i++){
        if(check(i))
        count++;
    }
    cout<<count;
    return 0;
}