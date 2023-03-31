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
    int t;
    cin >> t;
    while (t--)
    {
        int n0, n1, n2, i = 0, j = 0;
        cin >> n0 >> n1 >> n2;
        int n = n0 + n1 + n2 + 1;
        char s[n+1];
        if (!n0 && !n1)
            for (i = 0; i <= n2; i++)
                s[i] = '1';
        else if (!n2 && !n1)
            for (i = 0; i <= n0; i++)
                s[i] = '0';
        else
        {
            for (i = 0; i <= n2; i++)
                s[i] = '1';
            for (j = 0; j <= n0; j++, i++)
                s[i] = '0';
            n1--;
            while (n1 > 0)
                s[i] = (s[i - 1] == '0') ? '1' : '0', i++, n1--;
                ;
        }
        s[i]='\0';
        //for (i = 0; i < n; i++)
        cout << s << endl;
        //cout << endl;
    }
    return 0;
}
