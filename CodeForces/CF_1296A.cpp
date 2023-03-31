#include<bits/stdc++.h>
using namespace std;
main()
{
    int t, N;
    cin >> t;
    while (t--)
    {
        cin >> N;
        int odd = 0, even = 0, a;
        for (int i = 0; i < N; i++)
        {
            cin >> a;
            if (a % 2 == 0)
                even++;
            else
                odd++;
        }
        if((odd > 0 && even > 0)||(odd > 0 && N % 2 != 0))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
