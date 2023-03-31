/*
** Author: MAC45
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define PI acos(-1)
int fun(int n);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt","wt",stdout);
    ll i = 0;
    double num, A[128*1024];
    while (cin >> num)
        A[i++] = sqrt(num);
    for (i = i - 1; i >= 0; i--)
        printf("%.4lf\n", A[i]);
    return 0;
}
int fun(int n)
{
    return 0;
}
