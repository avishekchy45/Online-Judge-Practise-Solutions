#include<bits/stdc++.h>
using namespace std;
main()
{
    string M[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    string C;
    cin>>C;
    int k,i;
    cin>>k;
    for(i=0;i<12;i++)
    {
        if(C==M[i])
            break;
    }
    cout<<M[(i+k)%12]<<endl;
    return 0;
}
