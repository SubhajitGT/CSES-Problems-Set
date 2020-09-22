#include<stdio.h>
#include<string.h>
#define MAX 100000
int main()
{
    int countA=0,countC=0,countG=0,countT=0,i=0;
    char str[MAX];
    gets(str);
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
        printf("%d",countA);
    else if(countC>countG && countC>countT)
        printf("%d",countC);
    else if(countG>countT)
        printf("%d",countG);
    else
        printf("%d",countT);
    return 0;
}
