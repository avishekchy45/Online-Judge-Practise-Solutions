#include<stdio.h>
main()

{
    int N,Q;
    scanf("%d %d",&N,&Q);
    long long int A[N];
    for(int i=0; i<N; i++)
        scanf("%lld",&A[i]);
    for(int j=0; j<N; j++)
    {
        for(int i=0; i<N; i++)
        {
            if(A[i]>A[i+1])
            {
                long long int temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
            }
        }
    }
    //for(int i=0; i<N; i++)
        //printf("%d ",A[i]);
    for(int i=0; i<Q; i++)
    {
        long long X;
        int n;
        scanf("%d",&n);
        if(n==1)
        {
            scanf("%lld",&X);
            for(int i=0; i<N; i++)
                A[i]=A[i]-X;
        }
        if(n==2)
        {
            long long L,R;
            int K,l,m;
            scanf("%lld %lld %d",&L,&R,&K);
            for(l=0; l<N; l++)
            {
                if(A[l]==L)
                    break;
            }
            for(m=0; m<N; m++)
            {
                if(A[m]==R)
                    break;
            }
            if((m-l+1)<K)
                printf("-1");
            else
                printf("%d",A[l+K-1]);
        }

    }
    //for(int i=0; i<N; i++)
      //  printf("%d ",A[i]);
    return 0;

}

