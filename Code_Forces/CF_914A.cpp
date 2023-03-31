#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    int a[n],A;
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=n-1; i>=0; i--)
    {
        if(pow(ceil(sqrt(a[i])),2)!=a[i])
        {
            cout<<a[i];
            return 0;
        }
    }
}
