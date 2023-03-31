#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,k;
    cin>>n>>k;
    int num=n,a[n],j=0;
    for(int i=2; num!=1;)
    {
        if(num%i==0)
            num=num/i,a[j]=i,j++;
        else
            i++;
    }
    if(j<k)
        cout<<-1<<endl;
    else if(j==k)
    {
        for(int l=0; l<j; l++)
            cout<<a[l]<<" ";
    }
    else
    {
        int x,y,last=1;
        for(x=0; x<k-1; x++)
            cout<<a[x]<<" ";
        for(y=x; y<j; y++)
            last*=a[y];
        cout<<last;
    }
    return 0;
}
