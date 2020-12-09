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
    //freopen("input.txt","rt",stdin);
    //freopen("output.txt","wt",stdout);
    int T;
    cin>>T;
    while(T--)
    {
        string t,s;
        int i;
        cin>>t;
        int l=t.size();
        for(i=1; i<l; i++)
        {
            if(t[i]!=t[i-1])
                break;
        }
        if(i==l)
        {
            cout<<t<<endl;
            continue;
        }
        while(l--)
            cout<<10;
        cout<<s<<endl;
    }
    return 0;
}
