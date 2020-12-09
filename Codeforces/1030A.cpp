#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,A,h=0;
    cin>>n;
    while(n--)
    {
        cin>>A;
        if(A==1)
            h++;
    }
    if(h>0)
        cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;
    return 0;
}
//Accepted
