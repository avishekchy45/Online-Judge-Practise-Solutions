#include<bits/stdc++.h>
using namespace std;
main()
{
    int X,Y,A,B,C,sum=0;
    cin>>X>>Y>>A>>B>>C;
    int p[A],q[B],r[C];
    for(int i=0; i<A; i++)
        cin>>p[i];
    sort(p,p+A,greater<int>());
    for(int i=0; i<B; i++)
        cin>>q[i];
    sort(q,q+B,greater<int>());
    for(int i=0; i<C; i++)
        cin>>r[i];
    sort(r,r+C,greater<int>());
    int k=0;
    for(int i=0,j=0; i<X; i++)
    {
        if(k<C)
        {
            if(p[j]>r[k]&&(r[k]-p[j]<r[k]-q[j]))
                sum+=p[j],j++;
            else
                sum+=r[k],k++;
        }
        else
            sum+=p[j],j++;
    }
    for(int i=0,j=0; i<Y; i++)
    {
        if(k<C)
        {
            if(q[j]>r[k])
                sum+=q[j],j++;
            else
                sum+=r[k],k++;
        }
        else
            sum+=p[j],j++;
    }
    cout<<sum<<endl;
    return 0;
}
