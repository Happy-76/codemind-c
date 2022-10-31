#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,n;
    cin>>l;
    cin>>n;
    while(n--){
      int w,h;
      cin>>w>>h;
      if(w<l || h<l)
      cout<<"UPLOAD ANOTHER"<<endl;
      else if(w>=l && h>=l){
          if(w==h)
          cout<<"ACCEPTED"<<endl;
          else
          cout<<"CROP IT"<<endl;
      }
    }
    return 0;
}