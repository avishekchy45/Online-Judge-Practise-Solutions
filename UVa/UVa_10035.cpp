/*
** Author: MAC45
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ul unsigned long long
int main()
{
    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt", "wt", stdout);
    ul a, b;
    while (scanf("%llu%llu", &a, &b) != EOF)
    {
        ul m, n, sum = 0, count = 0, carry = 0;
        if (a == 0 && b == 0)
            break;
        for (ll i = 0; a > 0 || b > 0; i++)
        {
            m = a % 10, a = a / 10;
            n = b % 10, b = b / 10;
            sum = m + n + carry;
            if (sum > 9)
                count++, carry = 1;
            else
                carry = 0;
        }
        if (count == 0)
            printf("No carry operation.\n");
        else if (count == 1)
            printf("%llu carry operation.\n", count);
        else
            printf("%llu carry operations.\n", count);
    }
    return 0;
}
