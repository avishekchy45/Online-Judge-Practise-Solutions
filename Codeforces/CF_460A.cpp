/*
** Author: MAC45
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt","wt", stdout);
    ll n, m, ans = 0;
    cin >> n >> m;
    ans = n + n / (m - 1);
    if (n % (m - 1) == 0)
        ans -= 1;
    cout << ans << endl;
    return 0;
}
/*
SOLUTION 2:
ll n, m, ans = 0;
cin >> n >> m;
ll i = 1;
while (m * i <= n)
    n++, i++;
cout << n << endl;
return 0;
*/
