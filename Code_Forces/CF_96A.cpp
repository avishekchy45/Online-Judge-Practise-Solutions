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
    string S;
    cin >> S;
    int l = S.length();
    int danger = 0;
    for (int i = 1; i < l; i++)
    {
        if (S[i] == S[i - 1])
            danger++;
        else
            danger = 0;
        if (danger == 6)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
