#include<bits/stdc++.h>
using namespace std;

bool palindrome(int i,int j,string S)
{
    int c=j-i+1;
    for(int k=0;k<c; i++,j--,k++)
    {
        if(S[i]==S[j])
            continue;
        else
            return 0;
    }
    return 1;
}

main()
{
    string S;
    cin>>S;
    int N=S.length();
    if(N)
    if(palindrome(0,N-1,S)&&palindrome(0,((N-1)/2)-1,S)&&palindrome(((N+3)/2)-1,N-1,S))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
