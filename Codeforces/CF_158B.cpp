/*
** Author: MAC45
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt", "wt", stdout);
    int n;
    cin >> n;
    int s[n], taxi = 0;
    for (int i = 0; i < n; i++)
        cin >> s[i];
    sort(s, s + n);
    int i = 0, j = n - 1;
    while (i != j)
    {
        if (s[i] + s[j] <= 4)
        {
            s[j] += s[i];
            i++;
        }
        else
        {
            taxi++;
            j--;
        }
    }
    cout << taxi + 1;
    return 0;
}
