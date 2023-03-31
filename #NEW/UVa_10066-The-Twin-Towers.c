#include<stdio.h>
int main()
{
    int N1,N2,N,M,Rad1[101],Rad2[101],Arr[101][101],tower=0,i,j;
    while(N1!=0&&N2!=0)
    {
        scanf("%d %d",&N1,&N2);
        for(i=0; i<N1; i++)
            scanf("%d",&Rad1[i]);
        for(i=0; i<N2; i++)
            scanf("%d",&Rad2[i]);

        for(i=0; i<=N1; i++)
            Arr[i][0]=0;
        for(i=0; i<=N2; i++)
            Arr[0][i]=0;

        for(i=1; i<=N1; i++)
            for(j=1; j<=N2; j++)
                if(Rad1[i]==Rad2[j])
                    Arr[i][j]=Arr[i-1][j-1]+1;
                else
                    Arr[i][j]=max(Arr[i-1][j],Arr[i][j-1]);
        printf("Twin Towers #%d\n\n",tower++);
        printf("Number of Tiles : %d\n\n",Arr[i][j]);
    }

}
