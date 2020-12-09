#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,e=1;
    cin>>n;
    for(int i=2; i<=n/2; i++)
    {
        if((n-i)%i==0)
            e++;
    }
    cout<<e<<endl;
    return 0;
}
//Accepted
