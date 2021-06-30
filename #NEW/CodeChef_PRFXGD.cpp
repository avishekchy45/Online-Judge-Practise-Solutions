#include<bits/stdc++.h>
using namespace std;
main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string S;
        int K,X;
        cin>>S;
        cin>>K>>X;
        int ma=S.length(),c=0;
        for(int i=0; i<S.length()-1; i++)
        {
            for(int j=i+1; j<S.length(); j++)
            {
                if(S[i]==S[j])
                {
                    ma=j-i,c++;
                    if(c==X)
                        break;
                }
            }
            if(c==X)
                break;
        }
        cout<<ma<<endl;
    }
    return 0;
}
//TLE
