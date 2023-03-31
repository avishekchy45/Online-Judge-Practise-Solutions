//#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

int onoroy(long long int N);

int main()
{
    long long int N;
        cin>>N;
        cout<<onoroy(N)<<endl;
}

int onoroy(long long int N)
{
    long long int none=0;
        while(N>0)
        {
            if(N%2==1)
                none++;
            N=N/2;
        }
    return none;
}
