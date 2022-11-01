#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int mx=max(a,b);
    while(true){
        if(mx%a==0 && mx%b==0){
            cout<<mx;
            break;
        }
        else
        mx++;
    }
}