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
        ll Ax, Ay, Bx, By, Cx, Cy, Dx, Dy;
        double area;
        cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy;
        Dx = Cx - Bx + Ax, Dy = Cy - By + Ay;
        area = Ax * By - Ay * Bx + Bx * Cy - By * Cx + Cx * Dy - Cy * Dx + Dx * Ay - Dy * Ax;
        printf("Case %lld: %lld %lld %.0lf\n", ++tc, Dx, Dy, abs(area / 2));
    }
    return 0;
}
