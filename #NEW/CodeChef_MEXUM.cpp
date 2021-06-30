/*
** Author: MAC45
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int A[5];
ex(int a,int b)
{
    int c=a;
    a=b;
    b=c;
    return A[0],A[2];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    //freopen("input.txt","rt",stdin);
    //freopen("outut.txt","wt",stdout);
    for(int i=0; i<3; i++)
        cin>>A[i];
    ex(A[0],A[2]);
    //ex(a,b);
    //cout<<a<<" "<<b;
    for(int i=0; i<3; i++)
        cout<<A[i]<<" ";
    return 0;
}
