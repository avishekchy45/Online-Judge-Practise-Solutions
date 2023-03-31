#include<bits/stdc++.h>
using namespace std;
main()
{
    char S[1000];
    int t[124],sum=0;
    gets(S);
    for(int i=97; i<123; i++)
        cin>>t[i];
    for(int i=0; S[i]!='\0'; i++)
        sum+=t[S[i]];
    cout<<sum;
    //printf("%d",'z');
}
