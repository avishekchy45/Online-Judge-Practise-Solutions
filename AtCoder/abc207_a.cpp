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
    int A[3];
    cin >> A[0] >> A[1] >> A[2];
    sort(A, A + 3);
    cout << A[1] + A[2];
    return 0;
}
