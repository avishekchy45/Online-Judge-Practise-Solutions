//Solution 1
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
    ll N, i, j, Q[32768];
    cin >> N;
    if (N == 0)
    {
        cout << 10 << endl;
        return 0;
    }
    else if (N == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    for (i = 9, j = 0; i > 1;)
        if (N % i == 0)
            Q[j++] = i, N = N / i, Q[j] = N;
        else
            i--;
    if (N > 9)
        cout << -1;
    else
        for (i = j - 1; i >= 0; i--)
            cout << Q[i];
    cout << endl;
}

int fun(int n)
{
    return 0;
}


//Solution 2(using stack)
/*
** Author: MAC45


#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define PI acos(-1)
int fun(int n);
int main()
{
    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt","wt",stdout);
    ll N, i;
    stack<int> Q;
    cin >> N;
    if (N == 0)
    {
        cout << 10 << endl;
        return 0;
    }
    else if (N == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    for (i = 9; i > 1;)
        if (N % i == 0)
            Q.push(i), N = N / i;
        else
            i--;
    Q.push(N);
    Q.pop();
    if (N > 9)
        cout << -1;
    else
        while (Q.empty() == 0)
        {
            cout << Q.top();
            Q.pop();
        }
    cout << endl;
}

int fun(int n)
{
    return 0;
}
*/