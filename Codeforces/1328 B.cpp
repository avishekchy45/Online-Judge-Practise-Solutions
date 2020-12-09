#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        char s[n];
        for(int i=0; i<n; i++)
            s[i]='a';
        s[n]='\0';
        int sum=0,j;
        for(j=1; j<n; j++)
        {
            sum+=j;
        if(sum>=k)
                break;
        }
        s[n-(j+1)]='b';
        s[n-(k-sum+j)]='b';
        cout<<s<<endl;
    }
    return 0;
}
//Accepted
