/*
** Author: MAC45
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt", "wt", stdout);
    int T,Case=1;
    cin>>T;
    while(T--)
    {
        int N,D,i;
        cin>>N;
        string sub[N],home;
        int day[N];
        for(int i=0; i<N; i++)
            cin>>sub[i]>>day[i];
        cin>>D;
        cin>>home;
        for(i=0; i<N; i++)
        {
            if(home==sub[i])
                break;
        }
        if(i==N||day[i]>D+5)
            printf("Case %d: Do your own homework!\n",Case++);
        else if(day[i]<=D)
            printf("Case %d: Yesss\n",Case++);
        else
            printf("Case %d: Late\n",Case++);
        }
    return 0;
}
