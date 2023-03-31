/*
** Author: MAC45
*/

#include<bits/stdc++.h>
using namespace std;
main()
{
    int N,amount,total=0;
    char type;
    float coelho=0,rato=0,sapo=0;
    cin>>N;
    while(N--)
    {
        cin>>amount>>type;
        {
            total+=amount;
            if(type=='C')
                coelho+=amount;
            else if(type=='R')
                rato+=amount;
            else if(type=='S')
                sapo+=amount;
        }
    }
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %.0f\n",coelho);
    printf("Total de ratos: %.0f\n",rato);
    printf("Total de sapos: %.0f\n",sapo);
    printf("Percentual de coelhos: %.2f %%\n",coelho/total*100);
    printf("Percentual de ratos: %.2f %%\n",rato/total*100);
    printf("Percentual de sapos: %.2f %%\n",sapo/total*100);
    return 0;
}
