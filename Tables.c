#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=1;i<=b;i+=2){
        cout<<a<<" x "<<i<<" = "<<a*i<<endl;
    }
    return 0;
}