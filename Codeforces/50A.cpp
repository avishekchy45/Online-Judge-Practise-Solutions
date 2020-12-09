#include<bits/stdc++.h>
using namespace std;
int main()
{
    int M,N;
    scanf("%d %d",&M,&N);
    if(M%2==0)
        printf("%d\n",M/2*N);

    else
        printf("%d\n",M/2*N+N/2);


    return 0;
}
