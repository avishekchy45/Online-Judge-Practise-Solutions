/*
** Author: MAC45
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout.tie(0);
    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt","wt",stdout);
    int K, A, B;
    cin >> K >> A >> B;
    int rem = A % K;
    if (rem != 0 && K - rem + A > B)
        cout << "NG" << endl;
    else
        cout << "OK" << endl;
    return 0;
}
