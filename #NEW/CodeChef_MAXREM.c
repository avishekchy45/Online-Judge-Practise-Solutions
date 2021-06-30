#include<stdio.h>
#include<limits.h>
int main()
{
    int i,N,first,second;
    long long int A[100000000];

    scanf("%d",&N);

    for (i=0;i<N;i++)
        scanf("%li",&A[i]);

	first = second = INT_MIN;

	for (i = 0; i < N; i++)
	{
		if(A[i] > first)
		{
			second = first;
			first = A[i];
		}
		else if(A[i] > second && A[i] < first)
		{
			second = A[i];
		}
	}

	printf("%d", second);

}
