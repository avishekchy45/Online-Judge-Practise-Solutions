#include<bits/stdc++.h>
using namespace std;
void swap(int arr[],int n)
{
    int temp;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
}
main()
{
    int t,n,a[1000],b[1000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
            cin>>b[i];
        swap(a,n);
        swap(b,n);
    }
}
