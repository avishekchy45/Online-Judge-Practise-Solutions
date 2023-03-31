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
    while (n--)
    {
        string S;
        cin >> S;
        int l = S.length();
        if (l > 10)
            cout << S[0] << l - 2 << S[l - 1] << endl;
        else
            cout << S << endl;
    }
    return 0;
}
