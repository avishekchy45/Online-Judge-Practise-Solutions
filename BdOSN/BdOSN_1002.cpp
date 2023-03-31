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
    ll N, i;
    while (cin >> N)
    {
        ll sum = 0;
        while (N--)
        {
            cin >> i;
            sum += i;
        }
        cout << sum << endl;
    }
}

int fun(int n)
{
    return 0;
}