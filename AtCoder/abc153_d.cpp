#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int H,i=1;
    cin>>H;
    while(H!=0)
    {
        H=H/2;
        i*=2;
    }
    cout<<i-1<<endl;
    return 0;
}
//Accepted
