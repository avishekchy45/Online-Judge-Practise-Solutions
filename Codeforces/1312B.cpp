#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n,greater<int>());
        for(int i=0; i<n; i++)
            cout<<a[i]<<endl;
    }
}
