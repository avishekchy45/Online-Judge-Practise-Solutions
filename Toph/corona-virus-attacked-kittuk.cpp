/*
** Author: MAC45
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string n;
    cin>>n;
    ll l=n.length()-1;
    if(n[l]=='0')
    {
        while(n[l]=='0')
            l--;
    }
    for(ll i=0; i<=l; i++)
        cout<<n[i];
    cout<<endl<<"Stay at Home";
    return 0;
}
