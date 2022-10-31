#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b,c;
   cin>>a>>b>>c;
   int po=pow(a,b);
   int res=po%c;
   cout<<res;
   return 0;
}