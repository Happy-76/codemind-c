#include<bits/stdc++.h>
using namespace std;
bool check(int n){
    if(n==0 || n==1)
    return false;
    int s=(int)sqrt(n);
    for(int i=2;i<=s;i++){
        if(n%i==0)
        return false;
    }
    return true;
}
int main(){
    int num;
    cin>>num;
    if(check(num))
    cout<<"prime"<<endl;
    else
    cout<<"not a prime"<<endl;
    return 0;
}