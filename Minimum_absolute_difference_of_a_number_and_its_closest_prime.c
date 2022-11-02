#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
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
    int a,b;
    a=num+1;
    b=num-1;
    while(--a){
        if(isprime(a))
        break;
    }
    while(++b){
        if(isprime(b))
        break;
    }
    if((num-a)<(b-num)){
        cout<<num-a<<endl;
    }
    else if((num-a)>(b-num)){
        cout<<b-num<<endl;
    }
    else{
        cout<<num-a<<endl;
    }
    return 0;
}
