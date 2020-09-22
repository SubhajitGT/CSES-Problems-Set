#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<n;
    while(n!=1)
    {
        if(n%2==0)
        {
            n=n/2;
            cout<<" "<<n; //for the even number
        }
        else
        {
            n=(3*n)+1;
            cout<<" "<<n; // for the odd number
        }
    }
    return 0;

}
