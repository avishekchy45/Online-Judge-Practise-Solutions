/*
** Author: MAC45
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int fun(int n);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt","wt",stdout);
    ll t, tc = 0;
    cin >> t;
    while (t--)
    {
        double Ox, Oy, Ax, Ay, Bx, By;
        double r, c, C, arc;
        cin >> Ox >> Oy >> Ax >> Ay >> Bx >> By;
        r = sqrt(pow(Ax - Ox, 2) + pow(Ay - Oy, 2));
        c = sqrt(pow(Bx - Ax, 2) + pow(By - Ay, 2));
        C = acos((r * r + r * r - c * c) / (2 * r * r));
        arc = C * r;
        printf("Case %lld: %lf\n", ++tc, arc);
    }
    return 0;
}

int fun(int n)
{
    return 0;
}