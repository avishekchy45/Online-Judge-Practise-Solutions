/*
** Author: MAC45
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt","wt",stdout);
    int t, tc = 0;
    cin >> t;
    while (t--)
    {
        string c;
        cin >> c;
        int l = c.size();
        if (l == 5)
            cout << 3 << endl;
        else
        {
            if ((c[0] == 'o' && c[1] == 'n') || (c[1] == 'n' && c[2] == 'e') || (c[2] == 'e' && c[0] == 'o'))
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }
    return 0;
}
