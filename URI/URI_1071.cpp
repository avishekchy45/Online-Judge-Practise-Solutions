/*
** Author: MAC45
*/

#include<bits/stdc++.h>
using namespace std;
int swapping(int X,int Y)
{
    X=X+Y;
    Y=X-Y;
    X=X-Y;
}
main()
{
    int X,Y,A,N;
    cin>>X>>Y;
    if(X>Y)
        swap(X,Y);
    //cout<<X<<Y;
    if(X%2==0)
        A=X+1;
    else
        A=X+2;
    N=(Y-X-1)/2;
    cout<<(N*(2*A+(N-1)*2))/2<<endl;
    return 0;
}
