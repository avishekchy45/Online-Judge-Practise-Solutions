/*
** Author: MAC45
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt","wt",stdout);
    int t, i, a, b;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%d", &a);
        scanf("%d", &b);
        if (a > b)
            printf(">\n");
        if (a < b)
            printf("<\n");
        if (a == b)
            printf("=\n");
    }
    return 0;
}
