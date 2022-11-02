#include<bits/stdc++.h>
using namespace std;
bool ispalin(int num){
    string s=to_string(num);
    reverse(s.begin(),s.end());
    if(num==stoi(s))
    return true;
    return false;
}
int main(){
    int num;
    cin>>num;
    int a,b;
    a=num;
    b=num;
    while(--a){
        if(ispalin(a))
        break;
    }
    while(++b){
        if(ispalin(b))
        break;
    }
    if((num-a)<(b-num)){
        cout<<a<<endl;
    }
    else if((num-a)<(b-num)){
        cout<<b<<endl;
    }
    else{
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}