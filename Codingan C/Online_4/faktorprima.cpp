#include <stdio.h>
void primeFactorization(int n, int p)
{
	printf("Case #%d: ",p);
	int c = 2;
	while (c<n)
	{
		if (n%c == 0)
		{
			int e = 0;
			while (n % c == 0)
			{
				n = n/c;
				e++;
			}
			printf( "%d^%d",c,e);
			if (n != 1)
				printf( " * " );
		}
		c++;
	}
	if (n != 1)
		printf( "%d^1\n",c);
	else
		printf("\n");
}


int main()
{
	long long T;
	int i;
	scanf("%d",&T);
	long long N[T];
	for(i=0;i<T;i++)
	{
	scanf("%d",&N[i]);
	}
	for(i=0;i<T;i++){
	primeFactorization(N[i],(i+1));
	}
	return 0;
}
