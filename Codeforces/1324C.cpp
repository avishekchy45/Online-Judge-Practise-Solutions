#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l=s.size();
        int d=0,f=l;
        for(int i=l-1; i>=0; i--)
        {
            if(s[i]=='R')
            {
                if((f-i)>d)
                    d=f-i;
                f=i;
            }
        }
        if(d==0)
            cout<<l+1<<endl;
        else if(f>=d)
            cout<<f+1<<endl;
        else
            cout<<d<<endl;

    }
    return 0;
}
