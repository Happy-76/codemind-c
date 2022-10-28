#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,count,res;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    cin>>arr[i];
    res=0;
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            count++;
        }
        res+=count%2;
    }
    cout<<res;
    return 0;
}
