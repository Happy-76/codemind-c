#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,i,a[50],c=0,f=0,g=0;
    cin>>n;
    for(i=0;n!=0;i++)
    {
        r=n%10;
        a[i]=r;
        n=n/10;
        c++;
    }
    for(i=0;i<c;i++)
    {
        if(a[i]%2==0)
        {
            f++;
        }
        else if(a[i]!=0)
        {
           g++; 
        }
    }
    if(f!=c&&g!=c)
   cout<<"Mixed"<<endl;
    else if(c==f)
    cout<<"Even"<<endl;
    else if(c==g)
    cout<<"Odd"<<endl;
}