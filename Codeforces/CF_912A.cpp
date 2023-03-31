#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int A,B,X,Y,Z,crystals=0;
    cin>>A>>B>>X>>Y>>Z;
    A=(2*X+Y)-A;
    if(A>0)
        crystals+=A;
    B=(Y+3*Z)-B;
    if(B>0)
        crystals+=B;
    cout<<crystals<<endl;
}
