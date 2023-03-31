#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    char s[n];
    int c=0;
    for(int i=0; i<n; i++)
        cin>>s[i];
    sort(s,s+n);
    for(int i=0; i<n; i++)
    {
        if(s[i]==s[i+1])
            c++;
    }
    if(26-(n-c)<c)
        cout<<-1<<endl;
    else
        cout<<c<<endl;
    return 0;
}
//Accepted
