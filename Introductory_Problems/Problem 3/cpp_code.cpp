#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
int main()
{
    int countA=0,countC=0,countG=0,countT=0,i=0;
    char str[MAX];
    cin>>str;
    while(str[i]!='\0')
    {
        if(str[i]=='A')
            countA++;
        else if(str[i]=='C')
            countC++;
        else if(str[i]=='G')
            countG++;
        else
            countT++;
        i++;
    }
    if(countA>countC && countA>countG && countA>countT)
        cout<<countA;
    else if(countC>countG && countC>countT)
        cout<<countC;
    else if(countG>countT)
        cout<<countG;
    else
        cout<<countT;
    return 0;
}
