#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,sum=0;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++)
    {
        sum+=i;
        if(sum>=k)
        {
            if(sum-k==(n-i))
            {
                printf("%d\n",n-i);
                return 0;
            }
        }
    }
    return 0;
}
