#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i = 1; i <= T; i++)
    {
        int N,num,Hnum=0,cnt;
        cin>>N;
        int S[101] = {0};
        for(int j = 0; j < N; j++)
        {
            cin>>num;
            S[num]++;
        }
        for(int j = 0; j <= 100; j++)
        {
            if(S[j] >= Hnum)
            {
                Hnum = S[j];
                cnt = j;
            }
        }
        cout<<"Case "<< i <<": "<< cnt <<" "<< Hnum <<endl;
    }
    return 0;
}
