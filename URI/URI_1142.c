#include<stdio.h>
int main ()
{
    int N,i;
    scanf("%d",&N);
    for(i=0; i<4*N; i=i+4)
    {
        printf("%d %d %d PUM\n",i+1,i+2,i+3);
    }
    return 0;
}

/*#include<stdio.h>
int main(){

        int N, i, j;

        scanf("%d", &N);
        for (i = 1; i <= (4*N - 1); i+=4) {
            for (j = i; j <= i+2; j++) {
                printf("%d ", j);
            }
            printf("PUM\n");
        }

}*/
