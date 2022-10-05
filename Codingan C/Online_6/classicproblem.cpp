#include <stdio.h>

long long fpb(long long M, long long int N) 
{
 if (M==0) 
 {
        return N;
    }
    return fpb(N%M, M);
}
long long int KPK(long long int M, long long int N)
{
    return (M*N)/fpb(M, N);
}

int main()
{
    long long int T, e, f, g, L, R, Y = 0;
    scanf("%d", &T);
    for(int i=0;i<T;i++)
    {
        scanf("%lld %lld %lld %lld %lld", &e, &f, &g, &L, &R);
        long long int kpk = KPK(e, KPK(f,g)), Z;
  	int D = 1; 
  	if(kpk<L) 
  	{
   	while(kpk*D<=R) 
   	{
    Z = kpk*D;
    D++;
    	if(Z>=L) 
    	{
        break;
    	}
    }
    	Y = Y+Z;
    	while(kpk*D<=R) 
		{
    	Z = kpk*D;
    	Y = Y+Z;
    	D++;
    	}
	printf("Case #%d: %lld\n", i+1, Y);
	Y = 0;
    }else 
	{
	while(kpk*D<=R) 
	{
    	Z = kpk*D;
    	Y = Y+Z;
    	D++;
    }
    printf("Case #%d: %lld\n", i+1, Y);
    Y = 0;
    }
} 
  return 0;
}
