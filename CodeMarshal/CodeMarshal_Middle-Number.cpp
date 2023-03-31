#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    scanf("%d",&T);
    for(int i = 1; i <= T; i++)
    {
        int a[3];
        scanf("%d %d %d",&a[0],&a[1],&a[2]);
        sort(a,a+3);
        printf("Case %d: %d\n",i,a[1]);
    }
    return 0;
}
