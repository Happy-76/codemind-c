#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>50 and b>60 and c>100){
        cout<<10;
    }
    else if(a>50 and b>60)
    cout<<9;
    else if(b>60 and c>100)
    cout<<8;
    else if(a>50 and c>100)
    cout<<7;
    else if(a>50 or b>60 or c>100)
    cout<<6;
    else
    cout<<5;
    return 0;
}