#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
#define maxn 1111111
int mark[maxn],prime[maxn],res;
void get_prime()
{
    memset(mark,0,sizeof(mark));
    res=0;
    for(int i=2;i<maxn;i++)
    {
        if(!mark[i])
            mark[i]=prime[res++]=i;
        for(int j=0;j<res&&prime[j]*i<maxn;j++)
        {
            mark[i*prime[j]]=prime[j];
            if(i%prime[j]==0)
                break;
        }
    }
}
int main()
{
    get_prime();
    char s[111];
    int k[33],l,n;
    while(~scanf("%s%d",s,&l),s[0]!='0'&&l)
    {
        n=0;
int i=strlen(s)-1,j,temp,mul,flag=1;
        while(i>=0)
        {
            j=0,temp=0,mul=1;
            while(j<3&&i>=0)
            {
                temp=temp+(s[i]-'0')*mul;
                i--,j++,mul*=10;
            }
            k[n++]=temp;
        }
        i=0;
        while(prime[i]<l)
        {
            temp=0;
            for(j=n-1;j>=0;j--)
                temp=(temp*1000+k[j])%prime[i];
            if(!temp)
            {
                flag=0;
                printf("BAD %d\n",prime[i]);
                break;
            }
            i++;
        }
        if(flag)printf("GOOD\n");
    }
    return 0;
}
