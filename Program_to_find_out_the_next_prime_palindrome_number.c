#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    if(n==0 || n==1)
    return false;
    int s=(int)sqrt(n);
    for(int i=2;i<=s;i++){
        if(n%i==0)
        return false;
    }
    return true;
}
bool palin(int n){
    string s=to_string(n);
    reverse(s.begin(),s.end());
    if(stoi(s)==n)
    return true;
    return false;
}
int main(){
    int num;
    cin>>num;
    while(++num){
        if(palin(num)){
            if(prime(num)){
                break;
            }
        }
    }
    cout<<num<<endl;
    return 0;
}