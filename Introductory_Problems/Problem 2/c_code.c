#include<stdio.h>
#define MAX_SIZE 100000
int main()
{
    int n,i,sum=0,sum1=0,j,mis,a[MAX_SIZE];
    scanf("%d",&n);
    for(j=0;j<n-1;j++)
    {
    scanf("%d ",&a[j]);
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
    printf("%d",mis);
}
