#include<stdio.h>
using namespace std;
int main()
{
    int n,k;
    int a[1007]={0};
    scanf("%d%d",&n,&k);
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        a[x]++;
        if(a[x]%2==0) cnt+=2;
    }
    int c=cnt;
    for(int i=1;i<=k;i++)
    {
        if(a[i]%2)
        {
            cnt++;
            c+=2;

        }
        if(c>=n) break;
    }
    printf("%d",cnt);
    return 0;
}
