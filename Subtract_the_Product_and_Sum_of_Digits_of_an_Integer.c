#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    int sum=0,prd=1;
    cin>>num;
    while(num>0){
        int r=num%10;
        sum+=r;
        prd*=r;
        num/=10;
    }
    cout<<prd-sum;
    return 0;
}