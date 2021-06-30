#include<bits/stdc++.h>
using namespace std;
int n,k;
int add(int a[]);
main()
{
    int T;
    cin>>T;
    while(T--)
    {
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        add(a);
    }
}
int add(int a[])
{
    for(int i=0; i<n-1; i++)
        if(a[i]!=0 && a[i]==a[i+1])
        {
            cout<<"NO"<<endl;
            return 0;
        }
    int s=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]%k==0)
            continue;
        else if(s==0 && a[i]%k==1)
        {
            s++;
            continue;
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }

    }
    cout<<"YES"<<endl;

}
