#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int c;
        cin>>a>>b;
        if(a==b)
            c=0;
        else if(a>b&&(a-b)%2==0)
            c=1;
        else if(a>b&&(a-b)%2!=0)
            c=2;
        else if(a<b&&(b-a)%2!=0)
            c=1;
        else if(a<b&&(b-a)%2==0)
            c=2;
        cout<<c<<endl;
    }
}

