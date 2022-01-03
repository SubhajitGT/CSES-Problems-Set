/* Problem link is given below:
https://cses.fi/problemset/task/1071
*/

#include <bits/stdc++.h>

using namespace std;

# define ll long long int 

void operations(ll x,ll y,ll Max,ll Min)
{
    if((Max%2==0) and (Max==x) )
        cout<<Max*Max-Min+1;
    else if((Max%2==1) and (Max==x))
        cout<<(Max-1)*(Max-1)+Min;
    else if((Max%2==0) and (Max==y))
        cout<<(Max-1)*(Max-1)+Min;
    else
       cout<<Max*Max-Min+1; 
    
    cout<<"\n";  
}
int main()
{
    ll x,y;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        ll Max=max(x,y);
        ll Min=min(x,y);
        operations(x,y,Max,Min);
        
    }

    return 0;
}
/* Checkout the full CSES problem Set:
https://cses.fi/problemset/
*/
