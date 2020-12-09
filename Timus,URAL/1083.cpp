/*
** Author: MAC45
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt","wt",stdout);
    ll n,l,k,fact=1;
    string c;
    cin >> n;
    cin >> c;
    k=c.size();
    l=(n%k==0)?k:n%k;
    for(int i=n; i>=l; i-=k)
        fact*=i;
    cout << fact << endl;
    return 0;
}
