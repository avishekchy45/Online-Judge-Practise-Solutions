#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,N,K,B;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
    scanf("%d %d",&N,&K);
    B=N/K+N%K;
    printf("%d\n",B);
    }
}
