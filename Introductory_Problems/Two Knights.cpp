/* Check Problem Statement:
https://cses.fi/problemset/task/1072
*/

#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll K;
    cin>>K;
    for(ll i=1;i<=K;i++)
    {
        ll res =(((i*i)*(i*i-1)/2) - (4*(i-1)*(i-2)));
        cout<<res<<"\n";
    }

    return 0;
}
