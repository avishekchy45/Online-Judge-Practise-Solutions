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
    string s;
    cin >> s;
    int l = s.size();
    for (int i = 0; i < l; i++)
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            cout << "YES" << endl;
            return 0;
        }
    cout << "NO" << endl;
    return 0;
}
