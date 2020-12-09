#include<iostream>
using namespace std;
main()
{
    int P;
    cin>>P;
    while(P--)
    {
        string S,T;
        int N,R;
        cin>>N>>R>>S;
        cout<<N<<" ";
        for(int i=1,j=0;S[j]!='\0';i++)
        {
            T[i]=S[j];
            cout<<T[i];
            if(i==R)
                j++,i=0;
        }
        cout<<endl;
    }
    return 0;
}
