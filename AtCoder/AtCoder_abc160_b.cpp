#include<bits/stdc++.h>
using namespace std;
main()
{
    int X,H,P;
    cin>>X;
    H=(X/500)*1000;
    P=X%500;
    if(P!=0)
        H+=(P/5)*5;
    cout<<H<<endl;
    return 0;
}
//Accepted
