#include<bits/stdc++.h>
using namespace std;

main()
{
    int t,n,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        char s[n+1];
        for(int i=0,j=97; i<n; i++,j++)
        {
            if(i%b==0)
                j=97;
            s[i]=j;
        }
        s[n]='\0';
        cout<<s<<endl;
    }
    return 0;
}

