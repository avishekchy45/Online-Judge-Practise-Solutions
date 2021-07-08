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
    double A, B, C, D;
    cin >> A >> B >> C >> D;
    if (C * D <= B)
        cout << "-1";
    else
        cout << ceil(A  / (C * D - B));
    return 0;
}
