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
    ll unum[1500] = {1};
    for (ll i = 1, j = 2; i < 1500; j++)
    {
        ll n = j;
        while (1)
        {
            if (n % 2 == 0)
                n = n / 2;
            else if (n % 3 == 0)
                n = n / 3;
            else if (n % 5 == 0)
                n = n / 5;
            else
                break;
        }
        if (n == 1)
            unum[i] = j, i++;
    }
    printf("The 1500'th ugly number is %d.\n", unum[1499]);
    return 0;
}
