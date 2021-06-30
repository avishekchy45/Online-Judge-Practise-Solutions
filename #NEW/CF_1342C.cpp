/*
** Author: MAC45
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt","rt",stdin);
    //freopen("output.txt","wt",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,q,x=0;
        cin>>a>>b>>q;
        while(q--)
        {
            int l,r,rem1,rem2;
            cin>>l>>r;
            if(l>r||l==r)
            {
                cout<<0<<" ";
                continue;
            }
            rem1=l%r,rem2=r%l;
            for(int i=l; i<=r; i++)
            {
                if(i%rem1!=i%rem2)
                    x++;
            }
            cout<<x<<" ";
            x=0;
        }
        cout<<endl;
    }
    return 0;
}
