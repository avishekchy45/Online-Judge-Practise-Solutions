#include <bits/stdc++.h>
using namespace std;
main()
{
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        int N, K;
        cin >> N >> K;
        int A, sum = K;
        for (int j = 0; j < N; j++)
        {
            cin >> A;
            sum += K - A;
        }
        cout << "Case " << i << ": " << sum << endl;
    }
    return 0;
}
