/*
#include<bits/stdc++.h>
using namespace std;
int a, b, c, d, e, f;
int fn( int n )
{
    if( n == 0 )
        return a;
    if( n == 1 )
        return b;
    if( n == 2 )
        return c;
    if( n == 3 )
        return d;
    if( n == 4 )
        return e;
    if( n == 5 )
        return f;
    return( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) );
}
int main()
{
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- )
    {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
long long int a[10002];
main()
{
    long long int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- )
    {
        for(int i=0; i<6; i++)
            cin>>a[i];
        cin>>n;
        for(int j=6; j<=n; j++)
            a[j]=(a[j-1]+a[j-2]+a[j-3]+a[j-4]+a[j-5]+a[j-6])%10000007;
        printf("Case %lld: %lld\n", ++caseno, a[n] % 10000007);
    }
    return 0;
}
