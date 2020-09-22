#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0,sum1=0,j,mis;
    cin>>n;
    int a[n];
    for(j=0;j<n-1;j++)
    {
        cin>>a[j];
    }
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    for(j=0;j<n-1;j++)
    {
        sum1=sum1+a[j];
    }
    mis=sum-sum1;
    cout<<mis;
}
