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
    ll N;
    double R, X0, Y0, X1, Y1, X2, Y2, sum=0;
    cin >> N >> R;
    cin>> X0 >> Y0;
    X1=X0, Y1=Y0;
    for (ll i=1;i<N;i++)
    {
        cin>> X2 >> Y2;
        sum+=sqrt((X2-X1)*(X2-X1)+(Y2-Y1)*(Y2-Y1));
        X1=X2, Y1=Y2;
    }
    if (N!=1)    sum+=sqrt((X0-X1)*(X0-X1)+(Y0-Y1)*(Y0-Y1));
    printf("%.2lf\n", sum+2*PI*R);
}

int fun(int n)
{
    return 0;
}
