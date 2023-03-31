#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,h,m,s,r;
    scanf("%d",&N);
    h=N/3600;
    r=N%3600;
    m=r/60;
    s=r%60;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
