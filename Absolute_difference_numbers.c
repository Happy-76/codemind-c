#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,a=0,x;
    cin>>num>>x;
    string s=to_string(num);
    string s1=s.substr(0,0+x);
    int n1=stoi(s1);
    int rev=0;
    while(a<x){
        int r=num%10;
        rev=rev*10+r;
        num/=10;
        a++;
    }
    int dup=rev;
    rev=0;
    while(dup>0){
        int r=dup%10;
        rev=rev*10+r;
        dup/=10;
    }
    cout<<abs(rev-n1)<<endl;
    return 0;
}