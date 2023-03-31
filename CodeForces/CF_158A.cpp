/*
** Author: MAC45
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);
    ll n, k;
    cin >> n >> k;
    ll participants = 0;
    ll high_score = 0;
    for (ll i = 0; i < n; i++)
    {
        ll score;
        cin >> score;
        if (score > 0)
        {
            if (i < k - 1)
                participants += 1;
            else if (i == k - 1)
                participants += 1, high_score = score;
            else if (i > k - 1 && score == high_score)
                participants += 1;
        }
    }
    cout << participants << endl;
    return 0;
}
