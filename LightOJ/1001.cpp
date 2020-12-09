#include<bits/stdc++.h>
using namespace std;
main()
{
    int T,n,c1,c2;
    cin>>T;
    while(T--)
    {

        cin>>n;
        if(n<=10)
            cout<<0<<" "<<n<<endl;
        else
            cout<<10<<" "<<n-10<<endl;
    }
    return 0;
}
