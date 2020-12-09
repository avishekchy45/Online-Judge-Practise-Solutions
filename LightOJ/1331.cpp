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
        double R1, R2, R3, area;
        double a, b, c, s, A, B, C;
        cin >> R1 >> R2 >> R3;
        a = R1 + R2, b = R2 + R3, c = R3 + R1;
        s = (a + b + c) / 2.0;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        A = acos((b * b + c * c - a * a) / (2 * b * c));
        B = acos((c * c + a * a - b * b) / (2 * c * a));
        C = acos((a * a + b * b - c * c) / (2 * a * b));
        area -= A / 2.0 * R3 * R3 + B / 2.0 * R1 * R1 + C / 2.0 * R2 * R2;
        printf("Case %lld: %lf\n", ++tc, area);
    }
    return 0;
}

int fun(int n)
{
    return 0;
}