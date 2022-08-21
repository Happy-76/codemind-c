#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int sqr = num*num;
    int s=0;
    while(sqr>0){
        int r = sqr%10;
        s+=r;
        sqr/=10;
    }
    if(s==num){
        cout<<"Neon Number";
    }
    else{
        cout<<"Not Neon Number";
    }
}