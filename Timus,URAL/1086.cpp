/*
** Author: MAC45
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool isprime(int n);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "rt", stdin);
    //freopen("output.txt","wt",stdout);
    int k,n,i,prime=1;
    int a[15001];
    a[1]=2;
    cin>>k;
    for(i=3; prime<15000; i+=2)
    {
        if(isprime(i))
            prime++,a[prime]=i;
    }
    while(k--)
    {
        cin>>n;
        cout << a[n] << endl;
    }
    return 0;
}
bool isprime(int n)
{
    int l=sqrt(n)+1;
    for(ll i=2; i<=l; i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
