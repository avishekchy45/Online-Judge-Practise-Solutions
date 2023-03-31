/*
** Author: MAC45
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt","wt", stdout);
    ll n;
    cin >> n;
    ll final = 0;
    while (n--)
    {
        string x;
        cin >> x;
        if (x[1] == '+')
            final += 1;
        if (x[1] == '-')
            final -= 1;
    }
    cout << final << endl;
    return 0;
}
