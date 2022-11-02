#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    float out=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        out+=(1.0/i);
    }
    printf("%.2f",out);
}