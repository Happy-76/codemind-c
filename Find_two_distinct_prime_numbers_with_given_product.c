#include<bits/stdc++.h>
using namespace std;
bool isp(int n){
    if(n==1 || n==0){
        return false;
    }
    int s=(int)sqrt(n);
    for(int i=2;i<=s;i++){
        if(n%i==0)
        return false;
    }
    return true;
}
int main(){
    int n,m,done=0;
    cin>>n;
    for(int i=2;i<=(int)(sqrt(n));i++){
        if(n%i==0){
            m=n/i;
        }
        if(isp(i) && isp(m)){
            cout<<i<<" "<<m<<endl;
            done=1;
            break;
        }
    }
    if(done==0)
    cout<<-1<<endl;
    return 0;
}